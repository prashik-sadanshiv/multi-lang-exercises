import socket

HOST = "127.0.0.1"
PORT = 5000


def start_client():
    try:
        with socket.socket(socket.AF_INET, socket.SOCK_STREAM) as client:
            # Connect to the chatbot server
            client.connect((HOST, PORT))

            print("Connect to Python Chatbot!")
            print("Type 'bye' or 'exit' to disconnect.")
            print("-" * 40)


            reader = client.makefile("r", encoding="utf-8")

            with reader:
                while True:
                    message = input("You: ").strip()

                    if not message:
                        continue

                    # Send message to server
                    client.sendall(
                        (message + "\n").encode("utf-8")
                    )

                    # Receive server response
                    reply = reader.readline()

                    if not reply:
                        print("Server disconnected.")
                        break

                    reply = reply.rstrip("\n")
                    print(f"Bot: {reply}")

                    if message.lower() in ("bye", "exit", "quit"):
                        break

    except ConnectionRefusedError:
        print("Cannot connect to server.")
        print("Start server.py first.")

    except OSError as error:
        print(f"Network error: {error}")


if __name__ == "__main__":
    start_client()
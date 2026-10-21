import socket

HOST = "127.0.0.1"
PORT = 5000

def start_server():
    #create a TCP socket
    with socket.socket(socket.AF_INET, socket.SOCK_STREAM) as server:
        server.setsockopt(socket.SOL_SOCKET, socket.SO_REUSEADDR, 1)

        # Bind the server to an IP address and port
        server.bind((HOST, PORT))

        # Start listening for client connections
        server.listen()

        print(f"Server running on {HOST}:{PORT}")
        print("Waiting for a client to connect...")

        while True:
            conn, address = server.accept()

            with conn:
                print(f"\nClient connected: {address}")
                reader = conn.makefile("r", encoding="utf-8")

                with reader:
                    while True:
                        message = reader.readline()

                        if not message:
                            break

                        message = message.rstrip("\n")
                        print(f"Client: {message}")


                        if message.strip().lower() in (
                            "bye", "exit", "quit"
                        ):
                            replay = "Goodbye! Have a great day." 
                            conn.sendall(
                                (replay + "\n").encode("utf-8")
                            )    
                            break
                        
                        replay = input("You: ").strip()

                        # reply = get_bot_replay(message)
                        # print(f"Bot: {message}")

                        # Send the repl to the client
                        conn.sendall(
                            (replay + "\n").encode("utf-8")
                        )


            print("Client disconnected.")
            print("Stopping server")
            return 


if __name__ == "__main__":
    try:
        start_server()

    except KeyboardInterrupt:
        print("\nServer stopped.")


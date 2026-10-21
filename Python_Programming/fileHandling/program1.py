

try:
    with open("student.txt", "w", encoding="utf-8") as file:
        name = input("Enter the Name: ")
        language = input("Enter the language: ")
        Goal = input("What is your Goal: ")

        file.write(f"Name: {name}\n")
        file.write(f"Language: {language}\n")
        file.write(f"Goal: {Goal}\n")

    print("File is created successfuly...")

except FileNotFoundError as e:
    print(e)

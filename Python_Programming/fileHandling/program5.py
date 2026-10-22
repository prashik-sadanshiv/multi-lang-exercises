
# if you want add thired line

try:
    with open("student.txt", "a", encoding="utf-8") as file:
        name = input("Enter the name: ")
        file.write(f"{name}\n")

except Exception as eobj:
    print(eobj)


    
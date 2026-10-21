
# 2nd way to open and read the file

try:

    # best way to read the file 
    with open("student.txt", "r", encoding="utf-8") as file:
        content = file.read()
        print(content)

except FileNotFoundError as eobj:
    print(eobj)

finally:
    file.close()


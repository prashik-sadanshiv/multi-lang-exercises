# Read the file

try:

    # // 1st way to open and read the file
    file = open('student.txt', 'r', encoding="utf-8")
    content = file.read()
    print(content)

except FileNotFoundError as eobj:
    print(eobj)

finally:
    file.close()


# there are three different way to read the file

# 1. read all content from the file
# 2. read the content by limiting the number of characters
# 3. read the content line by line (one line at a time)


# # 1.Read all content from the file

# try:
#     with open('student.txt', "r", encoding="utf-8") as file:
#         content = file.read()

# except Exception as eobj:
#     print(eobj)



# 2. Read one line at a time
# try:
#     with open("student.txt", "r", encoding="utf-8") as file:
#         content = file.readline()
#         print(content)

# except Exception as eobj:
#     print(content)


# 3. Read one line at a time so put in for loop

# try:
#     with open("student.txt", "r", encoding="utf-8") as file:
#         for content in file:
#             print(content)

# except Exception as eobj:
#     print(eobj)
    




# when you specifically need a list of lines
try:
    with open("student.txt", "r", encoding="utf-8") as file:
        content = file.readlines()

        print(content)
        print(type(content))
        for data in content:
            print(data)

except Exception as eobj:
    print(eobj)





























































    
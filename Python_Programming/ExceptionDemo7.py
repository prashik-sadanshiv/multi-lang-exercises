

try:
    value = int(input("Enter a number: "))
    print(value)

except ValueError as e:
    print("Invalid Input: ",e)

finally:
    print("program End...")


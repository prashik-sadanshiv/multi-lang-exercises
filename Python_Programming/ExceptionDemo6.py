

try:
    result = 10 / 0
    print(result)

except ZeroDivisionError as e:
    print("Error is: ", e)

finally:
    print("program finished")

    
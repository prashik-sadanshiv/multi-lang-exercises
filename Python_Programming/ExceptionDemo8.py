

try:

    number = int(input("Enter a number: "))
    result = 100 / number

except ValueError:
    print("Invalue Input")

except ZeroDivisionError as e:
    print("Error: ", e)

except Exception as g:
    print("Generic Exception is: ", g)

else:
    print("Result: ", result)

finally:
    print("Execution Completed")


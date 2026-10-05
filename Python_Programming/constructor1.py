

class Demo:

    def __init__(self):
        print("Inside the constructor...")

    def addition(self, a, b):
        return a + b

    def substraction(a, b):
        print(f"Substraction is: {b - a}")

    substraction(4, 5)

obj1 = Demo()
print(f"Addition is: {obj1.addition(3,4)}")

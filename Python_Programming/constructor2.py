

class Demo:

    def __init__(self, a, b):
        print("Inside the constructor....\n")
        self.a = a
        self.b = b

    def addition(self):
        return self.a + self.b

    def substraction(self):
        return self.a - self.b

    def multiplication(self):
        return self.a * self.b

    def division(self):
        try:
            result = self.a / self.b
        except ZeroDivisionError:
            print("can not divide by zero")
        else:
            return result
        
obj = Demo(8, 0)
print(obj.addition())
print(obj.substraction())
print(obj.multiplication())
print(obj.division())

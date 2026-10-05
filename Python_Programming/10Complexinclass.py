
class ComplexNumber:

    def __init__(self, real, img):
        self.real = real
        self.img = img

    def magnitude(self):
        return (self.real**2 + self.img**2) ** 0.5


obj = ComplexNumber(3, 4)
obj1 = ComplexNumber(4, 3)
print(obj.magnitude())
print(obj1.magnitude())
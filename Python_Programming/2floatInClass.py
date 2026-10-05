
class Tempreture:

    def __init__(self, celsius):
        self.celsius = celsius  #flaot

    def to_fahrenheit(self):
        return self.celsius * 9/5 + 32


obj = Tempreture(45.4)
print(obj.to_fahrenheit())


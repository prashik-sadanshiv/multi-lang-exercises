from abc import ABC, abstractmethod

class Base(ABC):

    PI = 3.14 

    def __init__(self, No1, No2):
        self.no1 = No1
        self.no2 = No2

    def addition(self, No1, No2):
        return No1 + No2

    @abstractmethod
    def substraction(No1, No2):
        pass

    @classmethod
    def show_pi_value(cls):
        return cls.PI

    @staticmethod
    def calculate(No1, No2):
        return No1 * No2
    

class Derived(Base):

    def substraction(self, No1, No2):
        return self.no1 - self.no2

    def multiplication(self, No1, No2):
        return No1 * No2


dobj = Derived(2, 3)

print(f"Addition is: ", dobj.addition(11, 10))
print(f"Substraction is: ", dobj.substraction(11, 10))
print(f"Multiplication is: ", dobj.multiplication(11, 10))
print(f"Show PI value: ", Base.show_pi_value())
print(dobj.calculate(11, 11))
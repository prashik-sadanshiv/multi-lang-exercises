# Enscapsulation means keeping data and methods that
# operate on that data together inside a class,
# while controlling how the data is accessed

#Python uses conventions such as:

# name = public
# _name = Protected-by-convention
# __name = private/name-mangled



# 1 public variable

# class Student:
#     def __init__(self, name):
#         self.name = name


# s = Student('Rahul')
# print(s.name)

# Here name is public and can be accessed directly



# 2 public Method

# class Calculator:
#     def add(self, a, b):
#         return a + b

# c = Calculator()
# print(c.add(19, 44))
# The data and operation are bundled inside Calculator



#3 Protected variable
# class Employee:
#     def __init__(self, salary):
#         self._salary = salary


# emp = Employee(50000)
# print(emp._salary)

#_salary means:
    # "This is intended for internal/subclass use."
#Python does not strictly prevent access.



# 4 - Private variable
# class BankAccount:
#     def __init__(self, balance):
#         self.__balance = balance


# account = BankAccount(10000)

# print(account.__balance)
# This produces an error because __balance is name-mangled



# Private variable with getter
# class BankAccount:
#     def __init__(self, balance):
#         self.__balance = balance

#     def get_balance(self):
#         return self.__balance


# account = BankAccount(10000)

# print(account.get_balance())
# # The user doesn't directly access __balance



#private variable with setter
# class BankAccount:
#     def __init__(self, balance):
#         self.__balance = balance

#     def set_balance(self, balance):
#         if balance >= 0:
#             self.__balance = self.get_balance
            
#     def get_balance(self):
#         return self.__balance


# account = BankAccount(100000)

# account.set_balance(100000)

# print(account.get_balance())




# 7 -- Encapsulation with validation

# class Student:
#     def __init__(self, marks):
#         self.__marks = marks

#     def set_marks(self, marks):
#         if marks >= 0:
#             self.__marks = marks

#     def get_marks(self):
#         return self.__marks

# stu = Student(49)

# stu.set_marks(55)

# stu.get_marks()




# # Example 8 -- Using @property

# class Employee:
#     def __init__(self, salary):
#         self.__salary = salary

#     @property
#     def salary(self):
#         return self.__salary

#     @salary.setter
#     def salary(self, value):
#         if value >= 0:
#             self.__salary = value


# emp = Employee(100000)

# print(emp.salary)

# emp.salary = 400000

# print(emp.salary)


# Employee 9 -- Protecting a bank balance

# class BankAccount:
#     def __init__(self, balance):
#         self.__balance = balance

#     def deposit(self, amount):
#         self.__balance += amount

#     def withdraw(self, amount):
#         if 0 < amount <= self.__balance:
#             self.__balance -= amount

#     def get_balance(self):
#         return self.__balance

# account = BankAccount(100000)

# account.deposit(100000)
# account.withdraw()

# print(account.get_balance)


# # Example 10 - Employee salary protection


# class Employee:
#     def __init__(self, amount):
#         self.__amount = amount

#     def increment_salary(self, amount):
#         if amount > 0:
#             self.__amount += amount

#     def get_salary(self):
#         return self.__amount


# emp = Employee(500000)

# emp.increment_salary(40000)

# print(emp.get_salary())




# Private password

# class User:
#     def __init__(self, username, password):
#         self.username = username
#         self.__password = password

#     def login(self, password):
#         return password == self.__password


# user = User("admin", "abc123")

# print(user.login("abc123"))



# Real-world encapsulation


# class Car:
#     def __init__(self):
#         self.__engine_status = False

#     def start(self):
#         self.__engine_status = True
#         print("Engine start...")

#     def stop(self):
#         self.__engine_status = False
#         print("Stopped Engine....")

#     def engine_status(self):
#         return self.__engine_status


# car = Car()

# print(car.engine_status())

# car.start()

# car.stop()



# from abc import ABC, abstractmethod

# class Animal(ABC):

#     @abstractmethod
#     def sound(self):
#         pass

# class Dog(Animal):

#     def sound(self):
#         print("Bark")

#     def run(self):
#         print("Fast")

# dog = Dog()

# dog.sound()
# dog.run()



# from abc import ABC, abstractmethod

# class Shape(ABC):

#     @abstractmethod
#     def area(self):
#         pass

# class Circle(Shape):

#     def area(self):
#         print("Circle area")


# c = Circle()

# c.area()


# from abc import ABC, abstractmethod

# class Payment(ABC):

#     @abstractmethod
#     def pay(self):
#         pass

# class UPI(Payment):

#     def pay(self, amount):
#         print(f"Paid ${amount} using UPI")

# class ATM(Payment):

#     def pay(self, amount):
#         print(f"Paid ${amount} using ATM")

# class NetBanking(Payment):

#     def pay(self, amount):
#         print(f"Paid ${amount} using Net banking")


# payment1 = UPI()
# payment2 = ATM()
# payment3 = NetBanking()


# payment1.pay(400)
# payment2.pay(500)
# payment3.pay(700)



# from abc import ABC, abstractmethod

# class Vehicle(ABC):

#     @abstractmethod
#     def start(self):
#         pass

#     @abstractmethod
#     def stop(self):
#         pass


# class Car(Vehicle):

#     def start(self):
#         print("Car Started...")

#     def stop(self):
#         print("Car Stopped...")


# car = Car()

# car.start()
# car.stop()




# from abc import ABC, abstractmethod

# class Notification(ABC):

#     @abstractmethod
#     def send(self, message):
#         pass


# class Email(Notification):

#     def send(self, message):
#         print("Sending email: ", message)

# class SMS(Notification):

#     def send(self, message):
#         print("Sending SMS: ", message)


# Email().send("Hello")
# SMS().send("Hello")



from abc import ABC, abstractmethod

class Database(ABC):

    



# Age = int(input("Enter Your Age: "))

# if(Age >= 18):
#     print("Allowed")
# else:
#     print("Not Allowed")


class Selection2:

    def __init__(self, Age):
        self.Age = Age

    def check_eligibility(self):
        if self.Age >= 18:
            print("Allowed")
        else:
            print("Not Allowed")

Age = int(input("Enter Your Age: "))

obj = Selection2(Age)
obj.check_eligibility()

class Name:

    def __init__(self, first, last):
        self.first = first
        self.last = last

    def full_name(self):
        return f"I am {self.first} {self.last}, the Member of Parlament from Nagina.. and\n the protector of Constitution...\n"


obj = Name("Chandrashekhar", "Ajad")
print(obj.full_name())
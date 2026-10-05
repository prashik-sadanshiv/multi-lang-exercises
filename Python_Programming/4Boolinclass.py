
class User:
    def __init__(self, name, is_active=True):
        self.name = name
        self.is_active = is_active

    def status(self):
        return f"{self.name} is Active" if self.is_active else f"{self.name} is Inactive"


obj = User("Chandrashekhar", False)
print(obj.status())

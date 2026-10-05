
class Result:

    def __init__(self):
        self.tags = None

    def set(self, val):
        self.tags = val

    def is_empty(self):
        return self.tags is None


obj = Result()
obj.set("Aliace")
print(obj.is_empty())

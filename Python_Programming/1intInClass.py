
class Counter:
    def __init__(self, start):
        self.count = start          # create one integer
                                    # box to store count

    def increment(self):
        self.count += 1
        return self.count

obj = Counter(10)                   # assing that integer 10 value while creating the object of variable
obj.increment()                     # value of count will change from 10 to 11 
print(obj.increment())              # and with this syntax will again change from 11 to 12 and print the value on console


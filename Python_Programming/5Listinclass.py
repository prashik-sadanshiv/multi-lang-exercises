

class ShoppingCart:

    def __init__(self):
        self.items = []     #list

    def add(self, item):
        self.items.append(item)

    def total(self):
        return len(self.items)

    def item_list(self):
        print(self.items)

obj = ShoppingCart()
obj.add('toothpast')
obj.add('Tshart')
obj.add('Pen')
print(obj.total())

obj.item_list()
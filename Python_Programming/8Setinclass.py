

class Tags:

    def __init__(self, tags):
        self.tags = set(tags)

    def add_tag(self, tag):
        self.tags.add(tag)

    def display(self):
        return self.tags


obj = Tags(["Python", "Java", "Python"])
obj.add_tag("C")
print(obj.display())


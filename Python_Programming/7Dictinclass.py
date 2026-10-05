
class Student:
    def __init__(self, name, grade):
        self.name = name
        self.grade = grade

    def average(self):
        return sum(self.grade.values()) / len(self.grade)


obj = Student("Bob", {"math": 85, "che": 79, "phy": 66, "bio": 89})
print(obj.average())
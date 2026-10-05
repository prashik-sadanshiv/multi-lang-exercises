
class Employee:
    data = []
    def __init__(self, emp_id, name, salary, is_fulltime, skills):

        self.emp_id = emp_id
        self.name = name
        self.salary = salary
        self.is_fulltime = is_fulltime
        self.skills = skills
        Employee.data.append(self)

    @classmethod
    def show_data(cls):
        for i in cls.data:
            print(i)
            

obj = Employee(101, "Priya", 70000.0, True, ["Python", "SQL"])
print(f"{obj.name}: ${obj.salary}, skills: {obj.skills}")


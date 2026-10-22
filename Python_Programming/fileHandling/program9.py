from pathlib import Path

class Student:

    file_path = Path("Student.txt")
    record = {}
    # student_records = "Student.txt"
    def __init__(self, Sid, name, age, marks):

        self.Sid = Sid
        self.name = name
        self.age = age
        self.marks = marks

        Student.record[self.Sid] = self

        for Sid, values in Student.record.items():
            print(f"{Sid} - {values}")

    def AddStudentRecord(self):

        if Student.file_path.is_file():
            print("file is present")
        else:
            file = open("Student.txt", "w")
            file.close()
        try:

            with open("Student.txt", "a+", encoding="utf-8") as file:
                file.write(f"Name: {self.name}\n")
                file.write(f"Age: {self.age}\n")
                file.write(f"Marks: {self.marks}\n")

                file.seek(0)
                for data in file:
                    print(data)

            print("student record added")

            
        except Exception as eobj:
            print(eobj)

        finally:
            file.close()

    def ShowStudentRecord(self):

        if Student.file_path.is_file():
            print("Record file is there")
        else:
            print("Student Record file is not present.")
        try:
            with open("Student.txt", "r", encoding="utf-8") as file:
                content = file.readlines()

                return content

        except Exception as eobj:
            print(eobj)

        finally:
            file.close()

    # def UpdateStudentRecord(self):

    #     try:
    #         with open("Student.txt", "")
            

sobj1 = Student(101, "Vishal", 34, 66)
sobj1.AddStudentRecord()

sobj2 = Student(102, "Satish", 23, 55)
sobj2.AddStudentRecord()
record = sobj2.ShowStudentRecord()

for data in record:
    print(data)
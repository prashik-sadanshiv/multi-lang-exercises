

class Database:
    def __init__(self, name, tables):
        self.name = name
        self.tables = tables
        # self.connections = []
        # self.metadata = {}


obj = Database("Student", {
    "Student": ["id", "name", "age"],
    "courses": ["id", "title"]
})

print(obj.tables["Student"])
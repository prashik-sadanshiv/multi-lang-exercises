
class DataBuffer:

    def __init__(self, data):
        self.data = data.encode() if isinstance(data, str) else data #bytes

    def size(self):
        return len(self.data)

d = DataBuffer("Hello")
print(d.size())
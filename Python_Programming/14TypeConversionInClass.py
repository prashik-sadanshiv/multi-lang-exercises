

class Converter:
    def __init__(self, raw):
        self.raw = raw
        self.num = float(raw) # convert to float


    def to_int(self):
        return int(self.num)

    def to_str(self):
        return str(self.num)


obj = Converter("34")
print(obj.to_int())
print(obj.to_str())
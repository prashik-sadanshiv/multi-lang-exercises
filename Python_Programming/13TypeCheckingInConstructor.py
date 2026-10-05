
# Type checking in Constructor

class Validator:
    def __init__(self, value, expected_type):
        if not isinstance(value, expected_type):
            raise TypeError(f"Expected {expected_type.__name__}")
        self.value = value 


obj = Validator(23, int)
class Point:

    def __init__(self, coords):
        self.coords = tuple(coords)     # tuple (immutable)

    def distance_from_origin(self):
        return (self.coords[0]**2 + self.coords[1]**2) ** 0.5


p = Point([3, 4])
print(p.distance_from_origin())
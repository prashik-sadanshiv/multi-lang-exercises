


class Base:

    def __init__(self):
        pass

    def fun(self):
        print("Base fun...")

    def gun(self):
        print("Base run...")

    def sun(self):
        print("Base sun...")

    def run(self):
        print("Base run...")


class Derived(Base):
    def __init__(self):
        pass

    def fun(self):
        print("Derived fun...")

    def sun(self):
        print("Derived sun...")

    def mun(self):
        print("Derived mun...")

    def bun(self):
        print("Derived bun...")


dp = Derived()
dp.fun()
dp.gun()
dp.sun()
dp.run()
dp.mun()
dp.bun()



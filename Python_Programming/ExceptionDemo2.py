

class ExceptionDemo2:

    def OutofBound(self):

        Arr = [11, 21, 51, 101, 111]

        index = int(input("Enter the Index: "))

        print("Element is: ", Arr[index])

        print("----------- End of Main----------")


obj = ExceptionDemo2()
obj.OutofBound()

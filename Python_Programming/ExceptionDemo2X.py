

class ExceptionDemo2X:

    def OutOfBound(self):

        Arr = [11, 21, 51, 101, 111]

        try:
            index = int(input("Enter the Index: "))

            print("Element is: ", Arr[index])

        except IndexError as e:
            print("Error is: ", e)

        print("-------- End of Main---------")


obj = ExceptionDemo2X()
obj.OutOfBound()





class ExceptionDemo9:

    def OutOfBound(self):

        numbers = [10, 20, 30]

        try:
            index = int(input("Enter a index: "))
            print("Element is: ",numbers[index])

        except IndexError as e:
            print("Error: ", e)

        finally:
            print("out of the block...")

obj = ExceptionDemo9()
obj.OutOfBound()

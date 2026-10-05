

class ExceptionDemo1XX:

    def Division(self):

        No1 = int(input("Enter 1st Number: "))
        No2 = int(input("Enter 2nd Number: "))

        try:
            Ans = No1 / No2
            print("Division is: ", Ans)

        except ZeroDivisionError as e:
            print("Error is: ",e)

        except Exception as g:
            print("Generic Error: ", g)

        finally:
            print("Inside the finally block..")


obj = ExceptionDemo1XX()
obj.Division()

import java.util.*;

class ExceptionDemo1XX
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int No1 = 0, No2 = 0, Ans = 0;
        try
        { 
            System.out.println("Enter 1st Number: ");
            No1 = sobj.nextInt();

            System.out.println("Enter 2nd Number: ");
            No2 = sobj.nextInt();
                   
            Ans = No1 / No2;  // (Exception Prone Code) means Exception can occure at this line of code
        }

        catch(ArithmeticException aobj)
        {
            System.out.println("Exception occured: "+aobj);
        }

        catch(Exception eobj)
        {
            System.out.println("Inside Generic catch: "+eobj);
        }

        finally
        {
            System.out.println("Inside finally block...");
        }
        System.out.println("Division is: "+Ans);    
    }
}
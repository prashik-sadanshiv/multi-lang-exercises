import java.util.*;


class ExceptionDemo1
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int No1 = 0, No2 = 0, Ans = 0;

        System.out.println("Enter 1st Number: ");
        No1 = sobj.nextInt();

        System.out.println("Enter 2nd Number: ");
        No2 = sobj.nextInt();

        Ans = No1 / No2;                            // (Exception Prone Code) means Exception can occure at this line of code.
        System.out.println("Division is: "+Ans);    
    }
}
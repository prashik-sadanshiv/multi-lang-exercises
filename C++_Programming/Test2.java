
import java.util.Scanner;

class Test2
{
    public static void main(String A[])
    {
        int No1 = 0, No2 = 0, Ans = 0;

        Scanner scan = new Scanner(System.in);

        System.out.println("Enter the first number: ");
        No1 = scan.nextInt();

        System.out.println("Enter the secound Number: ");
        No2 = scan.nextInt();

        Ans = No1 + No2;

        System.out.println("Addition is: "+Ans);

    }
}

import java.util.*;

class Selection2
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int Age = 0;

        System.out.println("Enter your Age:");
        Age = sobj.nextInt();

        if(Age >= 18)
        {
            System.out.println("Allowed");
        }
        else
        {
            System.out.println("Not Allowed");
        }   
    }
}
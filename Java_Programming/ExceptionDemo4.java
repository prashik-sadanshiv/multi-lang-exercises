import java.util.*;

class AgeInvalid extends Exception
{
    public AgeInvalid(String str)
    {
        super(str);
    }
}

class ExceptionDemo4
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int age = 0;

        System.out.println("Enter your age: ");
        age = sobj.nextInt();
        try
        {
            if (age < 18)
            {
                throw new AgeInvalid("You are underage");
            }
            else
            {
                System.out.println("Welcome to ---------");
            }
        
        }
        catch(AgeInvalid aobj)
        {
            System.out.println("Exception Occured due to age");
        }
    }
}
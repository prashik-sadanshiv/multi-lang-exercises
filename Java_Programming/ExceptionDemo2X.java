import java.util.Scanner;

class ExceptionDemo2X
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int Arr[] = {11, 21, 51, 101, 111};

        int index = 0;
        try
        {
            System.out.println("Enter the Index: ");
            index = sobj.nextInt();

            System.out.println("Element is: "+Arr[index]);
        }
        catch(ArrayIndexOutOfBoundsException aobj)
        {
            System.out.println("Exception Occured: "+aobj);
        }
        
        System.out.println("--------End of Main---------");

    }   
}

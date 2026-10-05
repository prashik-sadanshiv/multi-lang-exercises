
// // import java.util.Scanner
// import java.util.*;

// class Selection1
// {
//     public static void main(String A[])
//     {
//         Scanner sobj = new Scanner(System.in);
//         int No = 0;

//         System.out.println("Enter the random number: ");
//         No = sobj.nextInt();

//         if((No % 2) == 0)
//         {
//             System.out.println("Even Number");
//         }
//         else
//         {
//             System.out.println("Odd Number");
//         }
//     }
// }

import java.util.*;

class Selection1
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int No = 0;

        System.out.print("Enter the Number:");
        No = sobj.nextInt();

        if((No % 2) == 0)
        {
            System.out.println("Even Number");
        }
        else
        {
            System.out.println("Odd Number");
        }
    }
}
import java.util.Scanner;                           // to create the object of Scanner class need to import from java.util.Scanner

class Addition                                      // class name Addition which should be the same as the main file name
{
    public static void main(String A[])             // main function line
    {
        int No1 = 0, No2 = 0, Ans = 0;              // Initialize the variable providing the zero

        Scanner sobj = new Scanner(System.in);      // This line create the object of scanner

        System.out.println("Enter First Number: ");     // Print to ask the first number
        No1 = sobj.nextInt();                           // nextInt(); is use to take first integer number in No1

        System.out.println("Enter Second Number: ");    // Print to ask the second number
        No2 = sobj.nextInt();                           // nextInt(); is use to take second integer number in No2

        Ans = No1 + No2;                                // Bussiness logic

        System.out.println("Addition is: "+Ans);        // print the total Addition of No1 and No2

    }
}
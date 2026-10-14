package test;

import java.util.Scanner;

class Addition{
    public static void main(String A[])
    {
        int var1 = 0;
        int var2 = 0;
        int var3 = 0;

        Scanner scan = new Scanner(System.in);
        System.out.println("Enter first No: ");
        var1 = scan.nextInt();

        System.out.println("Enter second No: ");
        var2 = scan.nextInt();

        var3 = var1 + var2;
        System.out.println("Addition is: "+var3);
    }
}


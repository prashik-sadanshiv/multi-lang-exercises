package common.Function;

import java.util.Scanner;

class Calculation
{
    public int No1;
    public int No2;

    public Calculation()
    {
        this.No1 = 0;
        this.No2 = 0;
    }

    public Calculation(int i, int j)
    {
        this.No1 = i;
        this.No2 = j;
    }

    public int Division()
    {
        int Result = 0;
        Result = this.No1 / this.No2;
        return Result;
    }

    public int Multiplication()
    {
        int Result = 0;
        Result = this.No1 * this.No2;
        return Result;
    }
}


class Arithematic
{
    public static void main(String A[])
    {
        int n1 = 0, n2 = 0, Result = 0;
        Scanner scan = new Scanner(System.in);

        System.out.println("Enter First Number: ");
        n1 = scan.nextInt();

        System.out.println("Enter Second Number: ");
        n2 = scan.nextInt();

        Calculation obj1 = new Calculation(n1, n2);

        Result = obj1.Division();
        System.out.println("Division is: "+Result);

        Result = obj1.Multiplication();
        System.out.println("")
    }
}
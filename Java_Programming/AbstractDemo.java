

abstract class Base
{
    public int i, j;

    public int Addition(int No1, int No2)
    {
        return No1 + No2;
    }

    public abstract int Substraction(int No1, int No2);

}

class Derived extends  Base
{
    public int x;

    public int Substraction(int No1, int No2)
    {
        return No1 - No2;
    }

    public int Mulitiplication(int No1, int No2)
    {
        return No1 * No2;
    }
}

class AbstractDemo
{
    public static void main(String A[])
    {
        // Base bobj = new Base(); // error because we can't create the object of abstract class as C++ 
        Derived dobj = new Derived();

        int Ret = 0;
        Ret = dobj.Addition(11, 10);
        System.out.println("Addition is: "+Ret);

        Ret = dobj.Substraction(11, 10);
        System.out.println("Substraction is: "+Ret);

        Ret = dobj.Mulitiplication(11, 10);
        System.out.println("Multiplication is: "+Ret);

    }
};
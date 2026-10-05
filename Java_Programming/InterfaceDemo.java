interface Caluculations
{
    int Addition(int No1, int No2);
    int Substraction(int No1, int No2);

}

class Mathematics implements  Caluculations
{
    public int Addition(int No1, int No2)
    {
        return No1 + No2;
    }

    public int Substraction(int No1, int No2)
    {
        return No1 - No2;
    }
    public int Mulitiplication(int No1, int No2)
    {
        return No1 * No2;
    }

}

public class InterfaceDemo {
    public static void main(String A[])
    {
        Mathematics mobj = new Mathematics();
        System.out.println("Addition is: "+mobj.Addition(11, 10));
        System.out.println("Addition is: "+mobj.Substraction(11, 10));
        System.out.println("Addition is: "+mobj.Mulitiplication(11, 10));
    }   
}

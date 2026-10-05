class Marvellous
{
    public int No1;
    public int No2;

    private int No3 = 11;

    public void fun()
    {
        System.out.println("Inside fun...");
    }

    public void showPrivateData()
    {
        System.out.println("Private No3: "+No3);
    }

    private void gun()
    {
        System.out.println("Inside gun...");
    }
    
    public void callingPrivateMethod()
    {
        gun();
    }
}

class Incapsulation
{
    public static void main(String A[])
    {
        Marvellous mobj = new Marvellous();

        System.out.println(mobj.No1);
        System.out.println(mobj.No2);

        mobj.showPrivateData();
        mobj.callingPrivateMethod();

        mobj.fun();
        // mobj.gun();
    }
}
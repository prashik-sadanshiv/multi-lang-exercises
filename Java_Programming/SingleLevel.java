

class Base
{
    public int i, j;

    public Base()
    {
        System.out.println("Inside Base constructor...");
    }

    public void fun()
    {
        System.out.println("Inside Base fun method...");
    }

    public void gun()
    {
        System.out.println("Inside Base gun method...");
    }
}


class Derived extends Base
{
    public int x, y;

    public Derived()
    {
        System.out.println("Inside Derived constructor...");
    }

    public void sun()
    {
        System.out.println("Inside Derived gun method...");
    }
}

class SingleLevel
{
    public static void main(String A[])
    {
        // Base bobj = new Base();
        Derived dobj = new Derived();           // Creating object of Derived class so we can access characteristic and behaviour of base class and derived class

        dobj.fun();
        dobj.gun();
        dobj.sun();    
    }
}
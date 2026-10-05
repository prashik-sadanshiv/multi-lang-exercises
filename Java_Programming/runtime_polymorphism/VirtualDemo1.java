



class Base
{
    public int i, j;

    void fun()
    {
        System.out.println("Base fun...");
    }

    void gun()
    {
        System.out.println("Base gun");
    }

    void sun()
    {
        System.out.println("Base sun");
    }

    void run()
    {
        System.out.println("Base run");
    }
}

class Derived extends Base
{
    int i, j;

    void fun()
    {
        System.out.println("Derived fun...");
    }

    void mun()
    {
        System.out.println("Derived mun...");
    }

    void bun()
    {
        System.out.println("Derived bun...");
    }
}

class VirtualDemo1
{
    public static void main(String A[])
    {
        Base bp = new Derived();

        bp.fun();
        bp.gun();
        bp.sun();
        bp.run();
        // bp.mun();       // error
        // bp.bun();       // error

    }
}
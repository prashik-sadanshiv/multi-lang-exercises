interface Demo
{
    int no = 11;
    void fun();
}

class Hello implements Demo
{
    // Error if you don't demonstrate all interface method in class.
}
public class InterfaceDemoX {
    public static void main(String A[])
    {
        Hello hobj = new Hello();
        
    }
}

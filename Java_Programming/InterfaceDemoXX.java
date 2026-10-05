// interview question:- multiple inheritance is not allowed in in java due to ambiguity but multiple implementation is allowed.

interface Demo
{
    int no = 11;    // public static final
    void fun();     // public abstract

}
class Hello implements Demo
{
    public void fun()
    {
        
    }
}
public class InterfaceDemoXX {
    public static void main(String A[])
    {

        System.out.println(Demo.no);    // means public and static becaouse we can access it anywhere using class name and 
        // System.out.println(Demo.no++);      // error becouse of "No is the final" means(Demo.no = Demo.no + 1;) is not possible

    }
}

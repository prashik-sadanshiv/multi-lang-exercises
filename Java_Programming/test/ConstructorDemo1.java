package test;

class Demo
{
    public Demo()
    {
        System.out.println("Inside Default Constructor...");
    }

    public Demo(int i, int j)
    {
        System.out.println("Inside parameterize Constructor...");
    }
}

class ConstructorDemo1
{
    public static void main(String A[])
    {
        Demo dobj1 = new Demo();

        Demo dobj2 = new Demo(2, 4);
    }
}

class Demo implements Runnable
{
    public void run()
    {
        System.out.println("Thread is running");
    }
}



class ThreadDemo3
{
    public static void main(String A[])
    {
        System.out.println("Inside main Thread");

        Demo dobj1 = new Demo();
        Demo dobj2 = new Demo();

        dobj1.start();      // Error  (becouse start method is not into runnable class)
        dobj2.start();      // Error
        
    }
}
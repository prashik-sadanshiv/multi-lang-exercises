// class Demo
// {
//     public static void main(String A[])
//     {
//         System.out.println("Jay Mansahar...\n");
//     }
// }



// Addition.java

// import java.util.Scanner;

// class Addition
// {
//     public static void main(String A[])
//     {
//         int No1 = 0, No2 = 0, Ans = 0;
//         Scanner sobj = new Scanner(System.in);

//         System.out.println("Enter 1st No:");
//         No1 = sobj.nextInt();

//         System.out.println("Enter 2nd No:");
//         No2 = sobj.nextInt()

//         Ans = No1 + No2;
//         System.out.println("Addition is:"+Ans);

//     }
// }




// class Demo
// {
//     public Demo()
//     {
//         System.out.println("Inside the default constructor....\n");
//     }
//     public Demo(int i, int j)
//     {
//         System.out.println("Inside the parameterize constructor...\n");
//     }
// }

// class Test1
// {
//     public static void main(String A[])
//     {
//         Demo dobj1 = new Demo();

//         Demo dobj2 = new Demo(12, 33);
//     }
// }



// import java.util.Scanner

// class Arithematic
// {
//     public Arithematic()
//     {
//         this.No1 = 0;
//         this.No2 = 0;
//     }

//     public Arithematic(int i, int j)
//     {
//         this.No1 = i;
//         this.No2 = j;
//     }

//     public int Addition()
//     {
//         int Result = 0;
//         Result = this.No1 + this.No2;
//         return Result;
//     }

//     public int Substraction()
//     {
//         int Result = 0;
//         Result = this.No1 - this.No2;
//         return Result;
//     }
// }

// class Test1
// {
//     public static void main(String A[])
//     {
//         int No1=0, No2=0;

//         Arithematic aobj1 = new Arithematic();
//         Arithematic aobj2 = new Arithematic(21, 11);

//         int Result = 0;
//         Result = obj1.Addition();
//         System.out.println("Addition is: "+Result);

//         Result = obj1.Substraction();
//         System.out.println("Substraction is: "+Result);

//     }
// }



// class Demo
// {
//     public int No1;
//     public int No2;

//     private int No3 = 11;

//     public void fun()
//     {
//         System.out.println("Inside fun...");
//     }

//     public void showPrivateData()
//     {
//         System.out.println("Private Data: No3"+No3);
//     }

//     private void gun()
//     {
//         System.out.println("Inside the gun...");
//     }

//     public void callingPrivateMethod()
//     {
//         gun();
//     }
// }


// class Test1
// {
//     public static void main(String A[])
//     {
//         Demo dobj1 = new Demo();

//         dobj1.No1 = 23;
//         dobj1.No2 = 12;

//         System.out.println(dobj1.No1);
//         System.out.println(dobj1.No2);


//         dobj1.showPrivateData();
//         dobj1.callingPrivateMethod();

//         dobj1.fun();

//     }
// }



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
        System.out.println("Private Data: No3", No3);
    }

    public void gun()
    {
        System.out.println("Inside gun....");
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
        Marvellous mboj = new Marvellous();

        System.out.println(mobj.No1);
        System.out.println(mobj.No2);

        mobj.showPrivateData();
        mobj.callingPrivateMethod()

        mobj.gun()
    }
}
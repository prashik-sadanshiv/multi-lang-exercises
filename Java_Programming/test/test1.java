// package test;

// class Arithematic
// {
//     public int No1;
//     public int No2;

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
//         int Ans = 0;
//         Ans = this.No1 + this.No2;
//         return Ans;
//     }

//     public int Substraction()
//     {
//         int Ans = 0;
//         Ans = this.No1 - this.No2;
//         return Ans;
//     }
// }

// class test1 {
//     public static void main(String A[])
//     {
//         int No1 = 0, No2 = 0;

//         Arithematic obj1 = new Arithematic(21, 10);

//         int Result = 0;
//         Result = obj1.Addition();
//         System.out.println("Addition is "+Result);

//         Result = obj1.Substraction();
//         System.out.println("Substraction is: "+Result);
//     }    
// }
//



class Demo
{
    public Demo()
    {
        System.out.println("Inside the default constructor");
    }

    public Demo(int i, int j)
    {
        System.out.println("Inside the parameterized constructor...");
    }
}


class test1
{
    public static void main(String A[])
    {
        Demo dobj1 = new Demo();

        Demo dobj2 = new Demo(2, 3);
    }
}
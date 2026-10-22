// interface Animal{
//     void sound();
// }

// class Dog implements Animal
// {
//     public void sound()
//     {
//         System.out.println("Dog Barks");
//     }
// }

// public class InterfaceMultipleExamples {
//     public static void main(String A[])
//     {
//         Dog dobj = new Dog();
//         dobj.sound();
//         // Animal aobj = new Animal();     // Animal is abstract; cannot be instantiated.. this line will give 
//         // aobj.sound();                   // compilation error
//     }
// }

// Important Notes:- 
    // 1) ->    Animal -> interface
    // 2) ->    sound() -> method declare in interface
    // 3) ->    Dog -> class
    // 4) ->    implements ->  keyword used to implement an interface
    // 5) ->    Dog must provide the implementation of sound()
// --------------------------------------------------------------------------------------------------------------------------
// --------------------------------------------------------------------------------------------------------------------------



// 2) Multiple classes Implementing One Interface 

// interface Animal 
// {
//     void sound();
// }

// class Dog implements Animal
// {
//     public void sound()
//     {
//         System.out.println("Dog make sound like woof woof");
//     }
// }

// class Cat implements Animal
// {
//     public void sound()
//     {
//         System.out.println("Cat make sound like meow meow");
//     }
// }

// class InterfaceMultipleExamples
// {
//     public static void main(String A[])
//     {
//         Dog dobj = new Dog();
//         Cat cobj = new Cat();

//         dobj.sound();
//         cobj.sound();

//     }
// }

// ----------------------------------------------------------------------------------------------------------------
// ----------------------------------------------------------------------------------------------------------------



// // 3) Interface reference
// interface Animal
// {
//     void sound();
// }

// class Dog implements Animal
// {
//     public void sound()
//     {
//         System.out.println("Dog Barks");
//     }
// }

// class Cat implements Animal
// {
//     public void sound()
//     {
//         System.out.println("Cat meows");
//     }
// }


// class InterfaceMultipleExamples
// {
//     public static void main(String A[])
//     {
//         Animal a;       // Using single referece creating multiple object to use one at a time

//         a = new Dog();  // using reference of animal class and creting obj of Dog class and calling implemented function
//         a.sound();

//         a = new Cat();  // using reference of animal class and creting obj of Cat class and calling implemented function
//         a.sound();
//     }
// }

// -------------------------------------------------------------------------------------------------------------------------------------
// -------------------------------------------------------------------------------------------------------------------------------------



// 4) Interface for Payment

interface Payment
{
    void pay(double amount);
}

class UPI implements Payment
{
    public void pay(double amount)
    {
        System.out.println("Amount "+amount+" is paid using UPI");
    }
}

class Cash implements Payment
{
    public void pay(double amount)
    {
        System.out.println("Amount "+amount+" is paid by Cash");
    }
}


class InterfaceMultipleExamples
{
    public static void main(String A[])
    {
        Payment pobj = new UPI();

        pobj.pay(10000);

         
    }
}
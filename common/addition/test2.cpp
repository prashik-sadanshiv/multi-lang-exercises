

// #include<iostream>
// using namespace std;

// class PPA
// {
//     public: 
//         int No1;
//         int No2;
    
//     void Display()
//     {
//         cout<<"Inside Display.....\n";
//     }
// };


// int main()
// {
//     PPA pobj;

//     cout<<sizeof(pobj)<<"\n";

//     return 0;

// }


// #include<iostream>
// using namespace std;

// class PPA
// {
//     public:
//         int No1;
//         int No2;

//     void Display()
//     {
//         cout<<"Inside display.....\n";
//     }
// };

// int main()
// {
//     PPA pobj;

//     pobj.No1 = 11;
//     pobj.No2 = 21;

//     pobj.Display();

//     return 0;
// }



// #include<iostream>
// using namespace std;

// class Demo
// {
//     public:
//         int No1;
//         char ch;
    
//     private:
//         float f;
// };

// int main()
// {
//     Demo dobj;
//     dobj.No1 = 11;

//     dobj.f = 23.34f;    // private characateristics

//     return 0;
// }




// #include<iostream>
// using namespace std;

// class Demo
// {
//     public:
//         int i;
//         char ch;
//         float f;
// };

// int main()
// {
//     Demo dobj;

//     dobj.i = 11;
//     dobj.ch = 'A';
//     dobj.f = 23.445f;

//     cout<<dobj.i<<"\n";
//     cout<<dobj.ch<<"\n";
//     cout<<dobj.f<<"\n";

//     cout<<sizeof(dobj.i)<<"\n";
//     cout<<sizeof(dobj.ch)<<"\n";
//     cout<<sizeof(dobj.f)<<"\n";

//     return 0;
// }




// #include<iostream>
// using namespace std;

// class Arithematic
// {
//     public:
//         int No1;
//         int No2;
    
//     Arithematic()
//     {
//         No1 = 0;
//         No2 = 0;
//     }

//     Arithematic(int i, int j)
//     {
//         No1 = i;
//         No2 = j;
//     }
// };

// int main()
// {
//     Arithematic aobj1;
//     Arithematic aobj2(10, 11);

//     cout<<aobj1.No1<<"\n";
//     cout<<aobj1.No2<<"\n";

//     cout<<aobj2.No1<<"\n";
//     cout<<aobj2.No2<<"\n";

//     return 0;
// }



// #include<iostream>
// using namespace std;

// class Arithematic
// {
//     public:
//         int No1;
//         int No2;

//     Arithematic()
//     {
//         No1 = 0;
//         No2 = 0;
//     }

//     Arithematic(int i, int j)
//     {
//         No1 = i;
//         No2 = j;
//     }

//     int Addition()
//     {
//         int Ans = 0;
//         Ans = No1 + No2;
//         return Ans;
//     }

//     int Substraction()
//     {
//         int Ans = 0;
//         Ans = No2 - No1;
//         return Ans;
//     }

//     int multiplication()
//     {
//         int Ans = 0;
//         Ans = No1 * No2;
//         return Ans;
//     }
// };


// int main()
// {
//     Arithematic aobj(30, 10);

//     int Result = 0;
//     Result = aobj.Addition();
//     cout<<"Addition is: "<<Result<<"\n";

//     Result = aobj.Substraction();
//     cout<<"Substraction is: "<<Result<<"\n";

//     Result = aobj.multiplication();
//     cout<<"Multiplication is: "<<Result<<"\n";

//     return 0;
// }




// using this operator means indirect accessing operator
// #include<iostream>
// using namespace std;

// class Arithematic
// {
//     public:
//         int No1;
//         int No2;
    
//     Arithematic()
//     {
//         this->No1 = 0;
//         this->No2 = 0;
//     }

//     Arithematic(int i, int j)
//     {
//         this->No1 = i;
//         this->No2 = j;
//     }

//     // int Addition(Arithematic *this)
//     int Addition()
//     {
//         int Ans = 0;
//         Ans = this->No1 + this->No2;
//         return Ans;
//     }
// };


// int main()
// {
//     Arithematic aobj(10, 11);
//     int Result = 0;
    
//     Result = aobj.Addition();
//     cout<<"Addition is: "<<Result<<"\n";

//     return 0;
// }



// #include<iostream>
// using namespace std;

// int main()
// {
//     int No1 = 0, No2 = 0, Ans = 0;
//     cout<<"Enter the first Number: \n";
//     cin>>No1;

//     cout<<"Enter the second Number: \n";
//     cin>>No2;

//     Ans = No1 + No2;

//     cout<<"Addition is: "<<Ans<<"\n";

//     return 0;
// }



// #include<iostream>
// using namespace std;

// int Addition(int i, int j)
// {
//     int Ans = 0;
//     Ans = i + j;
//     return Ans;
// }

// int main()
// {
//     int x = 0, y = 0, z = 0;
//     cout<<"Enter Number: \n";
//     cin>>x;

//     cout<<"Enter Number: \n";
//     cin>>y;

//     z = Addition(x, y);

//     cout<<"Addition is: "<<z<<"\n";
    
//     return 0;
// }



// #include<iostream>
// using namespace std;

// struct Arithematic
// {
//     int No1;
//     int No2;
// };

// int main()
// {
//     Arithematic aobj1;
//     Arithematic aobj2;

//     aobj1.No1 = 0;
//     aobj1.No2 = 0;

//     aobj2.No1 = 10;
//     aobj2.No2 = 11;

//     return 0;
// }



// #include<iostream>
// using namespace std;


// class Demo
// {
//     public:
//         int No1;
//         int No2;
//         static int Z;

//     Demo(int i, int j)
//     {
//         No1 = i;
//         No2 = j;
//     }
// };

// int Demo :: Z = 23;

// int main()
// {
//     cout<<Demo::Z<<"\n";

//     Demo obj1(19, 23);
//     Demo obj2(23, 44);

//     cout<<obj1.No2<<"\n";
//     cout<<obj2.No1<<"\n";

//     return 0;
// }



// #include<iostream>
// using namespace std;

// class Demo
// {
//     public:
//         int No1;
//         int No2;
//         static int X;
    
//     Demo(int i, int j)
//     {
//         No1 = i;
//         No2 = j;
//     }

//     void fun()
//     {
//         cout<<"Inside fun.....\n";
//         cout<<No1<<"\n";
//         cout<<No1<<"\n";
//         cout<<X<<"\n";
//     }

//     static void gun()
//     {
//         cout<<"Inside static gun function....\n";
//         cout<<X<<"\n";
//     }
// };

// int Demo :: X = 100;

// int main()
// {
//     cout<<Demo::X<<"\n";

//     Demo obj1(23, 44);
//     Demo obj2(24, 55);

//     obj1.fun();
//     obj2.fun();

//     obj1.gun();

//     cout<<obj1.X<<"\n";

//     return 0;
// }
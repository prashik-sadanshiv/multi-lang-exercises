// #include<stdio.h>

// struct Arithematic
// {
//     int No1;
//     int No2;
    
// };

// int main()
// {
//     struct Arithematic obj1;

//     printf("Enter First Number: ");
//     scanf("%d", &obj1.No1);

//     printf("Enter Second Number: ");
//     scanf("%d", &obj1.No2);
    
//     int Ans = 0;
//     Ans = obj1.No1 + obj1.No2;

//     printf("Addition is: %d\n", Ans);

//     return 0;
// }


// #include<stdio.h>

// int Addition(int i, int j)
// {
//     int Result = 0;
//     Result = i + j;
//     return Result;
// }

// int main()
// {
//     int No1 = 0, No2 = 0, Ans = 0;

//     printf("Enter first Number: ");
//     scanf("%d", &No1);

//     printf("Enter second Number: ");
//     scanf("%d", &No2);

//     Ans = Addition(No1, No2);

//     printf("Addition is %d\n", Ans);
    
//     return 0;
// }



// Multiple Struct Objets

// #include<stdio.h>

// struct Arithmatic
// {
//     int No1;
//     int No2;
// };

// int main()
// {
//     struct Arithmatic obj1 = {10, 20};
//     struct Arithmatic obj2 = {30, 40};
//     struct Arithmatic obj3;


//     obj3.No1 = obj1.No1 + obj2.No1;
//     obj3.No2 = obj1.No2 + obj2.No2;

//     printf("obj1: %d + %d = %d\n", obj1.No1, obj1.No2, obj1.No1 + obj1.No2);
//     printf("obj2: %d + %d = %d\n", obj2.No1, obj2.No2, obj2.No1 + obj2.No2);
//     printf("obj3: %d + %d = %d\n", obj3.No1, obj3.No2, obj3.No1 + obj3.No2);
    
//     return 0;
// }




// Multiple data type
// #include<stdio.h>
// #include<string.h>

// struct Student{
//     int rollNo;
//     char name[50];
//     float marks;
//     char grade;
// };

// int main()
// {
//     struct Student sobj1;

//     sobj1.rollNo = 101;
//     strcpy(sobj1.name, "Rahul");
//     sobj1.marks = 65.4f;
//     sobj1.grade = 'A';

//     printf("Roll No: %d\n", sobj1.rollNo);
//     printf("Roll No: %s\n", sobj1.name);
//     printf("Roll No: %f\n", sobj1.marks);
//     printf("Roll No: %c\n", sobj1.grade);

//     return 0;
// }



// Nested Structure
// #include<stdio.h>

// struct Date
// {
//     int day;
//     int month;
//     int year;
// };

// struct Employee
// {
//     int id;
//     char name[50];
//     struct Date joiningDate; // nested struct
//     float salary;
// };


// int main()
// {
//     struct Employee eobj = {1, "Amit", {15, 8, 2014}, 50000.0};
    
//     printf("Employee: %s\n", eobj.name);
//     printf("Joined on : %02d-%02d-%d\n",
//             eobj.joiningDate.day,
//             eobj.joiningDate.month,
//             eobj.joiningDate.year);
//     printf("Salary : %.2f\n", eobj.salary);

//     return 0;
// }




// Array Struct 

// #include<stdio.h>

// struct Arithmatic{
//     int No1;
//     int No2;
// };

// int main()
// {   
//     struct Arithmatic arr[3] = {
//         {1, 2},
//         {10, 20},
//         {100, 200}
//     };

//     for (int i = 0; i < 3; i++){
//         int ans = arr[i].No1 + arr[i].No2;
//         printf("arr[%d]: %d + %d = %d\n",
//                 i, arr[i].No1, arr[i].No2, ans);
//     }

//     return 0;
// }




// Pointer to a struct (Arrow Operator ->)

// #include<stdio.h>

// struct Arithmatic
// {
//     int No1;
//     int No2;
// };

// int main()
// {
//     struct Arithmatic aobj = {7, 3};
//     struct Arithmatic *ptr = &aobj;

//     // Two ways to accessing the member via pointer
//     printf("Using (*ptr).No1 = %d\n", (*ptr).No1);  // direct
//     printf("Using ptr->No1 = %d\n", ptr->No1);  // Indirect (cleaner)

//     ptr->No1 = 33; // After modifing the value of No1
//     printf("After modification of No1 Indirec way ptr->No1 = %d\n", aobj.No1); 

//     return 0;
// }



// Struct as Function Parameter (Pass by Value)

// #include<stdio.h>

// struct Arithmatic
// {
//     int No1;
//     int No2;
// };

// int add(struct Arithmatic a)    // recives a COPY
// {
//     a.No1 = 999;
//     return a.No1 + a.No2;
// }

// int main()
// {
//     struct Arithmatic obj = {10, 20};
//     int result = add(obj);

//     printf("Result          :%d\n", result);
//     printf("obj.No1 after   :%d (unchanged)\n", obj.No1);
    
//     return 0;
// }




// Struct as Function Parameter(pass by pointer)
// #include<stdio.h>

// struct Arithmatic
// {
//     int No1;
//     int No2;
// };

// int addAndModify(struct Arithmatic *a)    //    receives ADDRESS
// {
//     a->No1 = 999;
//     return a->No1 + a->No2;
// }

// int main()
// {
//     struct Arithmatic obj = {10, 20};
//     int result = addAndModify(&obj);

//     printf("Result           :\n", result);
//     printf("obj.No1 after   :%d (changed!)\n", obj.No1);

//     return 0;
// }




// Returning a Struct from a Function
// #include<stdio.h>

// struct Arithmatic
// {
//     int No1;
//     int No2;
// };

// struct Arithmatic makesSum(int a, int b)
// {   struct Arithmatic result;
//     result.No1 = a;
//     result.No2 = b;
//     return result;          // returns a struct by value
// }


// int main()
// {
//     struct Arithmatic obj = makesSum(12, 25);
//     printf("%d + %d = %d\n", obj.No1, obj.No2, obj.No1 + obj.No2);

//     return 0;
// }




// Returning a Struct from a Function
#include<stdio.h>

struct Arithmatic
{
    int No1;
    int No2;
};

struct Arithmatic makesSum(int a, int b)
{
    struct Arithmatic result;
    result.No1 = a;
    result.No2 = b;
    return result;
}


int main()
{
    struct Arithmatic obj = makesSum(12, 34);
    printf("%d + %d = %d\n", obj.No1, obj.No2, obj.No1+obj.No2);

    return 0;
}
















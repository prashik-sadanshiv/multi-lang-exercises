
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
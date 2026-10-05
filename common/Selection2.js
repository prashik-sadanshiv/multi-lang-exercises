

const prompt = require('prompt-sync')({sigint:true});

const Age = Number(prompt("Enter the number: "));

if(Age >= 18)
{
    console.log("Allowed");
}
else
{
    console.log("Not Allowed");
}


// // How to take the input from user in javaScript ... using promptl
// const prompt = require('prompt-sync')({sigint:true});

// const name = prompt("Enter Your Name: ");
// const age = Number(prompt("Enter Your Age: "));

// console.log(`Hi ${name} your age is ${age}`);


// function sayHello()
// {
//     console.log("Hello");
// }

// let message = sayHello()

// function sayHello()
// {
//     console.log("Hello");
// }

// var message = sayHello()


// function sayHello()
// {
//     console.log("Hello");
// }

// const message = sayHello()


// var fruits = ["kiwi", "apple"];

// var fruits = ["banana", "guiwa"];



// // In node.js, you'd use readline for input
// const readline = require('readline');

// const rl = readline.createInterface({
//     input: process.stdin,
//     output: process.stdout
// });

// let No1 = 0, No2 = 0, Ans = 0;

// rl.question('Enter First Number: ', (input1) => {
//     No1 = parseInt(input1);

//     rl.question('Enter Second Number: ', (input2) => {
//         No2 = parseInt(input2);

//         Ans = No1 + No2;
//         console.log(`Addition is: ${Ans}`)

//         rl.close();
//     });
// });


// For the Browser (using prompt())
// If you want to run this in a browser instead:

// const prompt = require('prompt-sync')();

// let No1 = 0, No2 = 0, Ans = 0;

// No1 = parseInt(prompt("Enter First Number: "));
// No2 = parseInt(prompt("Enter Second Number: "));

// Ans = No1 + No2;
// // console.log(`Addition is: ${Ans}`);
// // or display it on the page
// document.write(`Addition is: {$Ans}`);




// Just open your browser's DevTools console

// const prompt = require('prompt-sync')();

// let No1 = parseInt(prompt("Enter First Number: "));
// let No2 = parseInt(prompt("Enter Second Number: "));
// let Ans = No1 + No2;
// console.log(`Addition is: ${Ans}`);
// window.alert(`Addition is: ${Ans}`);

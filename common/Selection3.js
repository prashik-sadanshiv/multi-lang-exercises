

const prompt = require('prompt-sync')({sigint:true});

const Age = Number(prompt("Enter your age: "));

if (Age >= 18)
{
    console.log("Allowed");
}
else
{
    console.log("Not Allowed");
}
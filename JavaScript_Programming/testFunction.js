
// simple greeting 

// function greet(n) {
//     return `Hi ${n}`;
// }
// console.log(greet("Alice"));


// Add two numbers
// function add(a, b) {
//     return a + b;
// }
// console.log(add(4, 5));

// substraction two number
// function sub(a, b){ 
//     return a - b;
// }
// console.log(sub(23, 2));


// multiplication of two number
// function mul(a, b){
//     return a * b;
// }
// console.log(mul(4, 5));


// division of two number
// function div(a, b){
//     return a / b;
// }
// console.log(div(4, 2));

// // Area of circle 
// function circleArea(r){ return Math.PI * r ** 2; }
// console.log(circleArea(2));


// // Area of circle with minimum number of after dicimal 
// function circleArea(r) { return Math.PI * r ** 2; }
// console.log(circleArea(2).toFixed(2));


// // Hoisting demostration
// // CALLER: global BEFOR declation // CALLEE: hoisted
// console.log(hoisted());
// function hoisted() {return "I was hoisted!";}

// function hoisted() {return "I was hoisted!";}
// console.log(hoisted());


// Even/odd check
// function isEven(n) { return n % 2 === 0 ;}
// console.log(isEven(4), isEven(5));


// Reverse a string 
// function reverseString(string) {
//     return string.split("").reverse().join("");
// }
// console.log(reverseString("hello"));


// max of array
// function maxOf(arr) { return Math.max(...arr); }
// console.log(maxOf([2, 6, 3, 9]));


// Factorial (iterative)
// function fact(n) {
//     let r = 1;
//     for (let i = 2; i <= n; i++) 
//         r *= i;
//     return r;
// }
// console.log(fact(5));


// Celsius --> Fahrenheit
// function toF(c) { return c * 9 / 5 + 32; }
// console.log(toF(25));



// this inside declaration
// function say(){
//     return `I'm ${this.name}`;
// }
// const obj = {name: "Bob", say}
// console.log(obj.say())



// TYPE 2 -- Function Expression
// CALLER: wherever the variable lives. CALLEE: variable name. Notes: Not hoisted.

// const great = function (n) { 
//     return `Hi ${n}`; 
// };
// console.log(great("Alice"));

// const great1 = function (n) { 
//     return `Hi ${n}` 
// };
// console.log(great1("Bob"));

// const great2 = function (n) { 
//     return `Hi ${n}` 
// };
// console.log(great2("Manod"));

// const greet3 = function (n) { 
//     return `Hi ${n}` 
// };
// console.log(greet3("Satish"));


// square
// const sq = function(x) {
//     return x * x;
// };
// console.log(sq(4));



// // Not-hoisted demo
// try { notHoisted(); } catch (e) { console.log(e.constructor.name); }
// const notHoisted = function () { return 1; };



// // stored in array
// const ops = [function (a, b) { return a + b; }, function (a, b) { return a * b; }];
// console.log(ops[1](2, 3), ops[0](2,3));



// passed as argument
// function run(fn) { return fn(10); }
// console.log(run(function (x) { return x * 3; }));


// const fact = function factorial(n) {
//     return n <= 1 ? 1 : n * factorial(n - 1); 
// };
// console.log(fact(5));



// const f = function fib(n) {
//     return n < 2 ? n : fib(n - 1) + fib(n - 2); 
// };
// console.log(f(10));



// // sum 1..n recursively
// const s = function sumTo(n) {
//     return n === 0 ? 0 : n + sumTo(n - 1);
// };
// console.log(s(10));


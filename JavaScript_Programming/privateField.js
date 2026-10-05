// class BankAccount{
//     #balance;   // private -- can't access from outside

//     constructor(initial) {
//         this.#balance = initial;
//     }

//     // deposite is the method/ function, which we can call like function
//     deposit(amount){
//         if (amount > 0) this.#balance += amount;
//     }
    
//     // this get balance() is not the method, so we can't call like function.
//     get balance(){
//         return this.#balance;
//     }
// }

// let acc = new BankAccount(10000);
// console.log(`Before deposite new amount balance is: ${acc.balance()}`);
// acc.deposit(10000)
// console.log(`After deposite new amount balance is: ${acc.balance()}`);


class BankAccount{
    #balance;       // private -- can't access from  outside

    constructor(initial) {
        this.#balance = initial;
    }

    // deposite is the method/ function, which we can call like function
    deposit(amount){
        if (amount > 0) this.#balance += amount;
    }

    // this get balance() is not the method, so we can't call like function.
    get balance(){
        return this.#balance;
    }
}

let acc = new BankAccount(10000);
console.log(`Before deposite new amount balance is: ${acc.balance()}`);
acc.deposit(10000)
console.log(`After deposite new amount balance is: ${acc.balance()}`);
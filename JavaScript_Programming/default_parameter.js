class Account {
    constructor(owner, balance = 0){
        this.owner = owner;
        this.balance = balance;
    }
}

let aobj1 = new Account("Alice");
let aobj2 = new Account("Bob", 5000);

console.log(aobj1.balance);
console.log(aobj2.balance);


class BankAccount{
    constructor(amount){
        this._balance = amount;
    }

    // Getter - looks like a PROPERTY
    get balance() {
        return this._balance;
    }

    // Regular method -- looks like a FUNCTION
    balance() {
        return this._balance;
    }
}
// NOTE:- Can't have same name for Getter and function within the same class
//        it will override with the function... either use function only
        //   or Getter only to avoid the comflict.
        //   or can give different names for it.

let baobj = new BankAccount(1000);
// Getter - NO parentheses
console.log(baobj.balance);

// Method - WITH Parenthese
console.log(baobj.balance());
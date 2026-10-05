class User{
    constructor({name, email, age}){
        this.name = name;
        this.email = email;
        this.age = age;
    }

    display(){
        return `${this.name} (${this.email}) - Age ${this.age}`;
    }
}

let uobj = new User({name: "Alice", email: "alice@gmail.com", age: 30});
console.log(uobj.display());
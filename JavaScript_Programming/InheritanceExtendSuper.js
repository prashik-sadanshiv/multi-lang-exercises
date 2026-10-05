
class Animal{
    constructor(name, sounds){
        this.name = name;
        this.sounds = sounds;
    }
    speak(){
        return `${this.name} says ${this.sounds}`;
    }
}

class Dogs extends Animal{
    constructor(name, breed){
        super(name, "Woof");    // call the animals constructor
        this.breed = breed;
    }

    fetches(){
        return `${this.name} fetches the ball!`;
    }
}

let obj = new Dogs("Rex", "Labrador");
console.log(obj.speak());
console.log(obj.fetches());
console.log(obj.breed);
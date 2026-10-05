class Person{
    constructor(name, age, grade){
        this.name = name;
        this.age = age;
        this.grade = grade;
    }
}

let pobj = new Person("Alice", 23, "10th");
console.log(`${pobj.name}, ${pobj.age}, ${pobj.grade}`);    // "Alice, 23, 10th"
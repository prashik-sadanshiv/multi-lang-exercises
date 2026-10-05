

class Vehicle{
    constructor(brand, year){
        this.brand = brand;
        this.year = year;
    }

    info(){
        return `${this.brand} (${this.year})`;
    }
}

class Car extends Vehicle{
    constructor(brand, year, doors){
        super(brand, year);
        this.doors = doors;
    }
}

class ElecticCar extends Car{
    constructor(brand, year, doors, range){
        super(brand, year, doors);
        this.range = range;
    }

    display() {
        return `${this.info()} | Doors: ${this.doors} | Range : ${this.range}Km`;
    }
}


let obj = new ElecticCar("Tata", 2025, 4, 500);
console.log(obj.display());
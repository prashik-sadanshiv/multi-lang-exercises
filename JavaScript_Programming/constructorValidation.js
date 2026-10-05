
class Age{
    constructor(value){
        if (typeof value !== 'number' || value < 0 || value > 150){
            throw new Error("Invalid Input");
        }
        this.value = value;
    }
}

new Age(23);
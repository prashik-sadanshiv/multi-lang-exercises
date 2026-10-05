
class Circle{
    constructor(radius){
        this.radius = radius;
    }

    area(){
        return Math.PI * this.radius ** 2;
    }
}

let cobj = new Circle(5);
console.log(cobj.area());  
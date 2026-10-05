class Score{
    constructor(...marks){
        this.marks = marks;
    }
    total(){
        return this.marks.reduce((a, b) => a + b, 0);
    }

    average(){
        return this.total() / this.marks.length;
    }
}

let sobj = new Score(70, 80, 85, 90);
console.log(sobj.total());
console.log(sobj.average());    

class MathUtils{
    static add(a, b){
        return a + b;
    }

    static max(...nums){
        return Math.max(...nums);
    }
}

console.log(MathUtils.add(4, 5));
console.log(MathUtils.max(3, 4, 5, 6,7));
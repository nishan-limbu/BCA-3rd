class Number {
    int x;
    int y;
    int z;

    // Constructor
    Number(int x, int y, int z) {
        this.x = x;
        this.y = y;
        this.z = z;
    }

    // Method to return the largest number
    int getMax() {
        return Math.max(Math.max(x, y), z);
    }
}

class NumberDemo {
    public static void main(String[] args) {
        Number num = new Number(4, 5, 6);
        System.out.println("Largest number is: " + num.getMax());
    }
}
class Box {
    double length;
    double breadth;
    double height;

    // Constructor
    Box(double l, double b, double h) {
        length = l;
        breadth = b;
        height = h;
    }

    // Method to compute volume of box
    double getVolume() {
        return length * breadth * height;
    }
}

class BoxWeight extends Box {
    double weight;

    // Constructor
    BoxWeight(double l, double b, double h, double w) {
        super(l, b, h);
        weight = w;
    }
}

class BoxDemo {
    public static void main(String[] args) {
        BoxWeight box1 = new BoxWeight(2, 3, 4, 5);
        BoxWeight box2 = new BoxWeight(3, 4, 5, 6);

        System.out.println("Volume of box1 is: " + box1.getVolume());
        System.out.println("Weight of box1 is: " + box1.weight);
        System.out.println("Volume of box2 is: " + box2.getVolume());
        System.out.println("Weight of box2 is: " + box2.weight);
    }
}
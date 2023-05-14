interface Shape {
    void get_data();
    void display_area();
}

class Rectangle implements Shape {
    double length;
    double width;

    @Override
    public void get_data() {
        // code to read the values of length and width from user
    }

    @Override
    public void display_area() {
        // code to calculate and display the area of the rectangle
    }
}

class Square implements Shape {
    double side;

    @Override
    public void get_data() {
        // code to read the value of side from user
    }

    @Override
    public void display_area() {
        // code to calculate and display the area of the square
    }
}

class Question25 {
    public static void main(String[] args) {
        Rectangle r1 = new Rectangle();
        Square s1 = new Square();
        r1.get_data();
        s1.get_data();
        r1.display_area();
        s1.display_area();
    }
}
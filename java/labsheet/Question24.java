abstract class Fmachine {
    abstract void getdata();
    abstract void putdata();
}

class Airplane extends Fmachine {
    String code;
    String name;
    int capacity;

    @Override
    void getdata() {
        // code to read the values of code, name and capacity from user
    }

    @Override
    void putdata() {
        // code to display the values of code, name and capacity
    }
}

class Question24 {
    public static void main(String[] args) {
        Airplane a1 = new Airplane();
        Airplane a2 = new Airplane();
        a1.getdata();
        a2.getdata();
        a1.putdata();
        a2.putdata();
    }
}
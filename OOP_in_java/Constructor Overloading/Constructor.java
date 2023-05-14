//program showinc constructor overloading
import java.util.Scanner;
class Constructor
{
    int num1;
    int num2;

    public Constructor()
    {
        Scanner in = new Scanner(System.in);
        System.out.print("Enter first number: ");
        num1 = in.nextInt();
        System.out.print("Enter second number: ");
        num2 = in.nextInt();
        System.out.println();
    }
    public Constructor(int a, int b)
    {
        num1 = a;
        num2 = b;   
    }
    void display()
    {
        System.out.println("Result: ");
        System.out.println("Number 1 : "+num1);
        System.out.println("Number 2 : "+num2);
        System.out.println();
    }
    public static void main(String[] args)
    {
        Constructor obj1 = new Constructor();
        Constructor obj2 = new Constructor(7,8);
        obj1.display();
        obj2.display();
    }
}
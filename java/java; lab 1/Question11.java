//program to print the area and preimeter of a circle.
import java.util.Scanner;
class Question11
{
    public static void main(String[] args)
    {
        double radius;
        double area,perimeter;
        Scanner in = new Scanner(System.in);

        //taking the radius from the users
        System.out.println("Enter the radius of a circle: ");
        radius = in.nextInt();

        //printing the area of a circle
        area = (22*radius*radius)/7;
        System.out.println("Area of a circle = "+area);

        //printing the perimeter of a circle
        perimeter = (2*22*radius)/7;
        System.out.println("Perimeter of a circle = "+perimeter);
    }
}
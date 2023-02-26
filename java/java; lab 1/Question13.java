//program to print the area and perimeter of a rectangle
import java.util.Scanner;
class Question13 
{
    public static void main(String[] args)
    {
        int length,breadth;
        int area,perimeter;
        Scanner in = new Scanner(System.in);

        //taking length and breadth from the users
        System.out.println("Enter the length of a rectangle: ");
        length = in.nextInt();

        System.out.println("Enter the breadth of a rectangle: ");
        breadth = in.nextInt();
        System.out.println();

        //printing the results of area and perimeter of a rectangles
        area = (length*breadth);
        System.out.println("Area of a rectangle = "+area);
        perimeter = 2*(length+breadth);
        System.out.println("Perimeter of a rectangle = "+perimeter);
    }   
}
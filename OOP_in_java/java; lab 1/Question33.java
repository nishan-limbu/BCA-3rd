//program to compute the area of a polygon
import java.util.Scanner;
class Question33 
{
    public static void main(String[] args)
    {
        //taking inputs from users
        Scanner in = new Scanner(System.in);

        //taking length of one side from user
        System.out.println("Enter one side of polygon: ");
        int side = in.nextInt();

        //taking total number of sides on polygon from users
        System.out.println("Enter number of sides on a polygon: ");
        int number = in.nextInt();

        //printing the area of a polygon
        System.out.println();
        double area = (number*(side*side)/(4.0*Math.tan(Math.PI/number)));
        System.out.println("Area = "+area);
    } 
}
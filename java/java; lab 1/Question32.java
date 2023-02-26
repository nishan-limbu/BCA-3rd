//program to compute the area of a hexagon
import java.util.Scanner;
class Question32 
{
    public static void main(String[] args)
    {
        
        Scanner in = new Scanner(System.in);
        System.out.println("Enter one side of the hexagon: ");
        int side = in.nextInt();
        double area = (6*(side*side)/(4*Math.tan(Math.PI/6)));
        System.out.println("Area = "+area);
    } 
}
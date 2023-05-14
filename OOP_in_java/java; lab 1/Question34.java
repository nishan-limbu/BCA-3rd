//program to compute the distance between two points on the surface of earth
import java.util.Scanner;
class Question34 
{
    public static void main(String[] args)
    {
        Scanner in = new Scanner(System.in);
        System.out.print("Enter first latitude of coordinate (latitude1): ");
        double latitude1 = in.nextDouble();
        System.out.print("Enter first longitude of coordinate (longitude1): ");
        double longitude1 = in.nextDouble();
        System.out.print("Enter second latitude of coordinate (latitude2): ");
        double latitude2 = in.nextDouble();
        System.out.print("Enter second longitude of coordinate (longitude1): ");
        double longitude2 = in.nextDouble();
        System.out.println();
        //converting points into radians before calculations
        latitude1 = Math.toRadians(latitude1);
        longitude1 = Math.toRadians(longitude1);
        latitude2 = Math.toRadians(latitude2);
        longitude2 = Math.toRadians(longitude2);

        double earthRadius = 6371.01;//Kilometers
        double distance = earthRadius*Math.acos(Math.sin(latitude1)*Math.sin(latitude2)+Math.cos(latitude1)*Math.cos(latitude2)*Math.cos(longitude1-longitude2));
        System.out.println("Distance between two points = "+distance);
    }
}
import java.util.Scanner;
class Area
{
    int length, breadth;
    public Area(int l, int b)
    {
        length=l;
        breadth=b;
    }
    void returnArea()
    {
        System.out.print("Area = "+length*breadth);
    }
}
class Question12
{
    public static void main(String [] args)
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter length: ");
        int l = sc.nextInt();
        System.out.print("Enter breadth: ");
        int b = sc.nextInt();

        Area obj = new Area(l,b);
        obj.returnArea();
    }
}
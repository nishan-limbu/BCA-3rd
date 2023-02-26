import java.util.Scanner;
class Area
{
    int length,breadth;
    public Area(int x,int y)
    {
        length =x;
        breadth =y;
    }
    void returnArea(int x, int y)
    {
        System.out.print("Area = "+x*y);
        System.out.print("perimeter = "+2*(x+y));
    }

}
class Question14
{
    public static void main(String [] args)
    {
        Scanner in = new Scanner(System.in);
        System.out.print("Enter the length of rectangel: ");
        int x = in.nextInt();
        System.out.print("Enter the breadth of rectangel: ");
        int y = in.nextInt();
        Area obj = new Area(x,y);
        obj.returnArea(x,y);


    }
}
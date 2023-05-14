class Rectangle
{
    public static int  Area(int l,int b)
    {
        return l*b;
    }
    void Rectangle(int area, int l, int b)
    {
        area = Area(4,5);
        System.out.print("Area of rectangle = "+area);
        System.out.print("Perimeter of rectangle = "+2*(l+b));
    }
}

class Question15 {
    public static void main(String [] args)
    {
        Rectangle obj = new Rectangle();
        obj.Area(4,5);
        obj.Rectangle((4*5),5,8);
    }
}

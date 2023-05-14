
interface AreaSquare
{
    void Square();   
}
interface AreaRectangle
{
    void Rectangle();   
}
class Area implements AreaSquare, AreaRectangle
{
    @Override
    public void Square()
    {
        int l = 4;
        System.out.println("Area of Square = "+(l*l));
    }
    @Override
    public void Rectangle()
    {
        int l = 4;
        int b = 5;
        System.out.println("Area of Rectangle = "+(l*b));
    }
}
class InterfaceMultipleInheirtance
{
    public static void main(String[] args)
    {
        Area obj = new Area();
        obj.Square();
        obj.Rectangle();
    }
}
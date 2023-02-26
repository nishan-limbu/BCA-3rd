/* 
    program showing the use of PUBLIC access modifier in interface.
*/
interface Area //interface defined
{
    final static float pi=3.14F;
    float compute(float x, float y);

}
class Rectangle implements Area
{
    @Override
    public float compute(float x, float y)
    {
        return (x*y);
    }
}
class Circle implements Area
{
    @Override
    public float compute(float x, float y)
    {
        return (pi*x*x);
    }
}
class InterfaceUsingPublic
{
    public static void main(String[] args)
    {
        Rectangle rect = new Rectangle();
        Circle cir = new Circle();
        Area area;
        area = rect;
        System.out.println("Area of Rectangle = "+area.compute(10,20));
    }
}
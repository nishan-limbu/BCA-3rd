
interface InterfacePolygon
{
    void getArea();
    default void getPerimeter(int ...sides)
    {
        int perimeter = 0;
        for(int side:sides)
        {
            perimeter = perimeter+side;
        }
        System.out.println("Perimeter: "+perimeter);
    }
}
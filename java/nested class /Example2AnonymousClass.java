//Example-2 of Annonymous Inner Class:
/*Program to find the area of rectangle.
*/
abstract class Area
{
    abstract public void display();
}
class Example2AnonymousClass
{
    public static void main(String[] args)
    {
        int l=2,b=10;
        int result=l*b;
        Area obj=new Area()
        {
            public void display()
            {
                System.out.println("Area of rectangle="+result);
            }
        };
        obj.display();
    }
}
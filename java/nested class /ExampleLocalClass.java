//Example of Method-Local Inner Class:
/*Program to find the area of a circle
*/
class ExampleLocalClass
{
    void Area()
    {
        class Circle
        {
            void display()
            {
                double r=2.0,result;
                result=3.1416*r*r;
                System.out.println("Area of circle="+result);
            }
        }
        Circle cir=new Circle();
        cir.display();
    }
    public static void main(String[] args)
    {
        ExampleLocalClass obj=new ExampleLocalClass();
        obj.Area();
    }
}
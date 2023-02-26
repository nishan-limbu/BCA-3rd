//Example of Anonymous Inner Class:
/*Program to find the volume of square
*/
abstract class Volume
{
    abstract public void display();
}
class ExampleAnonymousClass
{
    public static void main(String[] args)
    {
        int l=2,b=3,h=4,result;
        result=l*b*h;
        Volume obj=new Volume()
        {
            public void display()
            {
                
                System.out.println("Volume of square="+result);
            }
        };
        obj.display();
    }    
}

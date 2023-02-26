//example of Inner class:
/*Program to calculate the area of a rectangle. */
class ExampleInnerClass
{
    
    class Area
    {
        void rectangle()
        {
            int l=20,b=20,result;
            result=l*b;
            System.out.println("Area of Rectangle="+result);
        }
    }
    public static void main(String[] args)
    {
        ExampleInnerClass obj=new ExampleInnerClass();
        ExampleInnerClass.Area obj2=obj.new Area();
        obj2.rectangle();
    }
}
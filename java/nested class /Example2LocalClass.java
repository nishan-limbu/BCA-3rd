//Example-2 of Method-Local Inner Class:
/*Program to find the volume of a cuboid having same size or length
*/
class Example2LocalClass
{
    void Volume()
    {
        class Square
        {
            void display()
            {
                int l=2,result;
                result=l*l*l;
                System.out.println("Volume of a cuboid="+result);
            }
        }
        Square sqr=new Square();
        sqr.display();
    }
    public static void main(String[] args)
    {
        Example2LocalClass obj=new Example2LocalClass();
        obj.Volume();
    }
}
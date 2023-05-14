class OverloadDemo
{//method overloading
    void calarea(float x)
    {
        System.out.println("the area of the square is "+Math.pow(x, 2)+" sq units");
    }
    void calarea(float x, float y)
    {
        System.out.println("the area of the rectangle is "+x*y+" sq units");
    }
    void calarea(double x)
    {
        double z = 3.14 * x * x;
        System.out.println("the area of the circle is "+z+" sq units");
    }
}
class Question10
{
     public static void main(String args[]) 
	{
	   OverloadDemo ob = new OverloadDemo();
	   ob.calarea(5);
	   ob.calarea(11,12);
	   ob.calarea(2.5);
        }
}
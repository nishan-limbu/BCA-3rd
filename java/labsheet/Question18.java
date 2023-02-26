class Area
{
    void calarea(long b, long h)
    {
        long area=(b*h)/2;
        System.out.println("Area of Triangle is: " + area);  
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
class Question18
{
     public static void main(String args[]) 
	{
	   Area ob = new Area();
	   ob.calarea(3,4);
	   ob.calarea(11,12);
	   ob.calarea(2.5);
    }
}
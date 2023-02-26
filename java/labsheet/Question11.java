class calVolume
{//constructor overloading
    void calvolume(float x, float y, float z)
    {
        System.out.println("the volume of a box is "+x*y*z+" cubic units");
    }
    void calvolume(float x)
    {
        System.out.println("the area of the square is "+Math.pow(x, 3)+" sq units");
    }
    void calvolume(float x, float y)
    {
        System.out.println("the perimeter of the rectangle is "+2*(x+y)+" units");
    }
}
class Question11
{
     public static void main(String args[]) 
	{
	   calVolume ob = new calVolume();
	   ob.calvolume(5);
	   ob.calvolume(4,3,2);
	   ob.calvolume(2,4);
        }
}
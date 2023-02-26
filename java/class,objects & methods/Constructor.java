/*
Use of a constructor method to initialize an object at the time of its creation.
*/
class rectangle
{
    int length,breadth;

    void getData(int x,int y)
    {
        length=x;
        breadth=y;
    }
    int rectArea()
    {
        int area=length*breadth;
        return (area);
    }
}
class Constructor
{
    public static void main(String[] args)
    {
        int area1;
        rectangle rect1=new rectangle();
        rect1.length=10;
        rect1.breadth=12;
        area1=rect1.length*rect1.breadth;

        //printing the area of a rectangle
        System.out.println("Area of a rectangle= "+area1);
    }
}
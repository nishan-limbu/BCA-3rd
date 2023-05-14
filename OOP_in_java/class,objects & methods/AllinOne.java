/*
Program showing the following in one program:
1. Declaration of class, method. 
2. Creating an objects.
3. Accessing class members
*/
class Rectangle
{
    int length,breadth;   //declaration of variables
    /*  int length;
        int breadth;
    */
    void getData(int x,int y) //declaration of method
    {
        length=x;
        breadth=y;
    }

    int recArea() //Definition(Declaration) of another method
    {
        int Area=length*breadth;
        return (Area);
    }
}
class AllinOne  //class with main method
{
    public static void main(String[] args)
    {
        int area1,area2;
        Rectangle rect1=new Rectangle();        //creating an objects
        Rectangle rect2=new Rectangle();        //creating an objects
        rect1.length=15;            //Accessing variables
        rect1.breadth=10;           //Accessing variables
        area1=rect1.length * rect1.breadth;

        rect2.getData(20,10);       //accessing methods
        area2=rect2.recArea();

        //printing an outputs
        System.out.println("Area1="+area1);
        System.out.println("Area2="+area2);
    }   
}
/*
    Program to show the Method Overloading in java
    [Method Overloading:
                        In java, it is possible to create methods that have 
    the same name, but different parameter lists and dfferent defintions. This is called method overloading.
    ]
*/
class Room
{
    int length,breadth;

    Room(int x,int y)       //constructor-1
    {
        length=x;
        breadth=y;
    }
    Room (int x)          //constructor-2
    {
        length=breadth=x;
    }

    int area()
    {
        int area=length*breadth;
        return(area);
    }
}
class Method_Overloading
{
    public static void main(String[] args)
    {
        int area1,area2;
        Room room1=new Room(10,5);  //using constructor-1
        Room room2=new Room(6);     //using constructor-2
        area1=room1.length*room1.breadth;
        area2=room2.length*room2.breadth;

        //printing the area of a room
        System.out.println("Area of a Room-1 = "+area1);
        System.out.println("Area of a Room-2 = "+area2);
    }
}
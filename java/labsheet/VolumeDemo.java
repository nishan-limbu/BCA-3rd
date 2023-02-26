//qestion no. 4:
class Box
{
    double length,breadth,height;
    void get_data(double l, double b, double h)
    {
        length=l;
        breadth=b;
        height=h;

    }
    double calVolume()
    {
        return length*breadth*height;
    }
    void displayVolume()
    {
        System.out.print("Volume of a box = "+calVolume()+" cubic meter");
    }
}
class VolumeDemo
{
    public static void main(String [] args)
    {
        Box obj= new Box();
        obj.get_data(20,60,10);
        obj.displayVolume();
    }
}
class Volume
{
    void Volume(int x)
    {
        System.out.println("The volume of a box is "+ x*x*x);
    }
}
public class Question7 
{
    public static void main(String[] args)
    {
        Volume obj = new Volume();
        obj.Volume(5);
    }    
}

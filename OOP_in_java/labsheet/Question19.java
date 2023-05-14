interface Calculation
{
    int sum(int x, int y);
    int mul(int x, int y);
}
class DispCal implements Calculation
{
    public int sum(int x,int y)
    {
        return x+y;
    }
    public int mul(int x, int y)
    {
        return x*y;
    }
}
class Question19
{
    public static void main(String [] args)
    {
        DispCal obj = new DispCal();
        Calculation Sum;
        Sum=obj;
        System.out.println("Sum = "+Sum.sum(5,5));
        System.out.println("Sum = "+Sum.mul(5,5));
    
    }
}
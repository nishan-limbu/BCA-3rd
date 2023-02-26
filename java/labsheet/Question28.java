interface calculate
{
    int add(int x, int y);
    int diff(int x, int y);
}
class Operation implements calculate
{
    public int add(int x, int y)
    {
        return x+y;
    }
    public int diff(int x, int y)
    {
        return x-y;
    }
}

class Question28 {
    public static void main(String [] args)
    {
        Operation obj = new Operation();
        calculate cal;
        cal = obj;
        System.out.println("Addition = "+cal.add(20,30));
        System.out.println("Addition = "+cal.diff(50,30));
    }
}

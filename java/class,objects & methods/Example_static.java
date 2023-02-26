class Example_static
{
    static int x=10;
    static class Inner
    {
        static void Display()
        {
            System.out.println("x="+x);
        }
    }
    public static void main(String[] args)
    {
        Inner.Display();
    }
}
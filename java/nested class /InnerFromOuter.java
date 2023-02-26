/*program to access member variable data of outer class from inner class. */
public class InnerFromOuter
{
    private class Inner
    {
        private int x=50;
    }
    void display()
    {
        Inner inner=new Inner();
        System.out.println(inner.x);
    }
    public static void main(String[] args)
    {
        InnerFromOuter outer=new InnerFromOuter();
        outer.display();
    }
}
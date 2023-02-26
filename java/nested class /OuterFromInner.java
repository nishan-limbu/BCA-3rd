/*program to access member variable data of outer class from inner class.*/
public class OuterFromInner 
{
    private int x=40;
    class Inner
    {
        void display()
        {
            
            System.out.println("Value of x"+"= "+x);
        }
    } 
    public static void main(String[] args)
    {
        OuterFromInner outer=new OuterFromInner();
        OuterFromInner.Inner inner=outer.new Inner();
        inner.display();
    } 
}
//program to show the Method-Local Inner class
public class LocalInner 
{
    private int x=50;
    void display()
    {
        class Local
        {
            void msg()
            {
                System.out.println(x);
            }
        }
        Local l=new Local();
        l.msg();
    }   
    public static void main(String[] args)
    {
        LocalInner obj=new LocalInner();
        obj.display();
    } 

}
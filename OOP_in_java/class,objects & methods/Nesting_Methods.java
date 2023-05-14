/*
A method can be called by using only its name by another methods inside of same class.
This is known as Nesting of Methods.
*/
//program to illustrate the Nesting of Methods inside a class
class Nesting
{
    int a,b;
    Nesting(int x,int y)       //constructor method
    {
        a=x;
        b=y;
    }
    int largest()
    {
        if(a>=b)
            return (a);
        else
            return (b);
    }
    void display()
    {
        int large=largest();        //calling a method
        System.out.println("Largest Value = "+large);
    }
}
class Nesting_Methods
{
    public static void main(String[] args)
    {
        Nesting nest=new Nesting(20, 10);
        nest.display();
    }
}
//program to find the factorial of a number
class factorial 
{
    public static void main(String[] args)
    {
        int x=4,result;
        result=factorial1(4);
        System.out.println("Factorial of x is "+result);
    }
    public static int factorial1(int x)
    {
        if (x==1)
            return 1;
        else
            return x*factorial1(x-1);
    }
    
}
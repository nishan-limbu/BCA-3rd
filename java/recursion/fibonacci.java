//program to print the fibonacci series in java using recursion
class fibonacci 
{
    public static void main(String[] args)
    {
        int x=5;
        System.out.println("Fibonacci Series of "+x+"numbers = ");
        for(int i=0;i<x;i++)
        {
            System.out.println(fib(i)+" ");
        }
    }
    public static int fib(int num)
    {
        if(num==0)
            return 0;
        if((num==1)||(num==2))
            return 1;
        else
            return (fib(num-2)+fib(num-1));
    }
}
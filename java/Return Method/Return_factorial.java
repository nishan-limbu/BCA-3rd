//program to return the factorial from the method in java
class Return_factorial
{
    public static void main(String[] args)
    {
        int x=4,result;

        result=factorial(4);
        System.out.println("Factorial of x = "+result);
    }
    public static int factorial(int x)
    {
        int fact=1;
        for(int i=1;i<=4;i++)
        {
            fact=fact*i;
        }
        return fact;
    }
}
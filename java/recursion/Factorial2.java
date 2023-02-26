//program to calculate the factorial of  a given number using recursion
import java.util.Scanner;
class Factorial2
{
    public static void main(String[] args)
    {
        Scanner in = new Scanner(System.in);
        System.out.print("Enter any number: ");
        int num = in.nextInt();
        int result = fact(num);
        System.out.print("Factorial of "+num+" = "+result);
    }
    public static int fact(int n)
    {
        if(n==1)
        {
            return 1;
        }
        else
        {
            return (n*fact(n-1));
        }
    }
}
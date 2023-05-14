//program that accepts an integer(n) and compute the value of (n+nn+nnn)
import java.util.Scanner;
class Question41 
{
    public static void main(String[] args)
    {
        int integer,result;
        Scanner in = new Scanner(System.in);
        System.out.println("Enter any integer: ");
        integer = in.nextInt();//assigning integer from users
        System.out.println();

        System.out.println("Finding the value of (n+nn+nnn),");
        System.out.println("Where, n = "+integer);
        System.out.println();

        //printing out the result
        System.out.println("Answer: ");
        result = (integer+integer*integer+integer*integer*integer);
        System.out.println("The value of (n+nn+nnn) = "+result);
    }    
}
//program to take two numbers as input and dipslay the product of two numbers
import java.util.Scanner;
class Question5
{
    public static void main(String[] args)
    {
        int result;

        //using scanner to take two numbers from users
        Scanner in = new Scanner(System.in);

        System.out.println("Enter the number : ");
        int num1 = in.nextInt();

        System.out.println("Enter another number : ");
        int num2 = in.nextInt();

        result=(num1*num2);
        System.out.println("Now, ");
        System.out.println("Product of "+num1+" and "+num2+" = "+result);
    }
}
/*Program that accepts three integers from users and return true if second num is greater than first number
and third number is greater than second number
 */
import java.util.Scanner;
class Question49 
{
    public static void main(String[] args)
    {
        //taking three numbers from the users
        Scanner in = new Scanner(System.in);
        System.out.println("Enter first number: ");
        int num1 = in.nextInt();
        System.out.println("Enter second number: ");
        int num2 = in.nextInt();
        System.out.println("Enter third number: ");
        int num3 = in.nextInt();
        System.out.println();

        //checking second number greater than first number  
        //and checking third number greater than second number
        System.out.println("checking.......\n Number-2 > Number-1");
        if(num2>num1)
        {
            System.out.println("ans: True ");
            System.out.println("i.e. Number-2 is greater than Number-1. ");
        }
        else
        {
            System.out.println("ans: False ");
            System.out.println("i.e. Number-2 is not greater than Number-1. ");
        }
        System.out.println();
        System.out.println("checking.......\n Number-3 > Number-2");
        if(num3>num2)
        {
            System.out.println("ans: True");
            System.out.println("i.e. Number-3 is greater than Number-2.");
        }
        else
        {
            System.out.println("ans: False ");
            System.out.println("i.e. Number-3 is not greater than Number-2.");
        }
    }   
}
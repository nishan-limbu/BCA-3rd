/*
program that accepts three integers from users and return true if two or more of them have same rightmost digit
 */
import java.util.Scanner;
class Question50 
{
    public static void main(String[] args)
    {
        Scanner in = new Scanner(System.in);
        System.out.println("Enter first number: ");
        int num1 = in.nextInt();
        System.out.println("Enter second number: ");
        int num2 = in.nextInt();
        System.out.println("Enter third number: ");
        int num3 = in.nextInt();
        System.out.println();
        //checking whether the rightmost digit among two of them are equal or not
        System.out.println("Checking the rightmost digit of number1 and number2:");
        if((num1%10)==(num2%10))
        {
            System.out.println("ans: True\ni.e. Number-1 and Number-2 have same rightmost digit.");
        }
        else
        {
            System.out.println("ans: False\ni.e. Number-1 and Number-2 donot have same rightmost digit.");
        }
        System.out.println();
        System.out.println("Checking the rightmost digit of number2 and number3:");
        if((num2%10)==(num3%10))
        {
            System.out.println("ans: True\ni.e. Number-2 and Number-3 have same rightmost digit.");
        }
        else
        {
            System.out.println("ans: False\ni.e. Number-2 and Number-3 donot have same rightmost digit.");

        }
        System.out.println();
        System.out.println("Checking the rightmost digit of number1 and number3:");
        if((num3%10)==(num1%10))
        {
            System.out.println("ans: True\ni.e. Number-1 and Number-3 have same rightmost digit.");
        }
        else
        {
            System.out.println("ans: False\ni.e. Number-1 and Number-3 donot have same rightmost digit.");

        }
    }    
}
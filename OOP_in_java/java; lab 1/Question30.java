//program to compare two numbers
import java.util.Scanner;
class Question30 
{
    public static void main(String[] args)
    {
        int num1,num2;

        Scanner in = new Scanner(System.in);

        //taking two numbers from the users
        System.out.println("Enter the first number: ");
        num1 = in.nextInt();
        System.out.println("Enter the second number: ");
        num2 = in.nextInt();

        System.out.println();
        System.out.println("Results:");
        //comparing the two numbers
        if(num1>num2)
        {
            System.out.println(" "+num1+" is greater than "+num2);
        }
        if(num1<num2) 
        {
            System.out.println(" "+num1+" is less than "+num2);
        }
        if(num2>num1)
        {
            System.out.println(" "+num2+" is greater than "+num1);
        }
        if(num2<num1)
        {
            System.out.println(" "+num2+" is less than "+num1);
        }
        if(num1==num2)
        {
            System.out.println(" "+num1+" is equal to "+num2);
        }
        if((num1!=num2)||(num2!=num1))
        {
            System.out.println(" "+num1+" and "+num2+" are not equal.");
        }
    }   
}
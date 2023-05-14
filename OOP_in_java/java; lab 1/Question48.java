//program to calculate the sum of two integers and return true if the sum is equal to a third integer
import java.util.Scanner;
class Question48 
{
    public static void main(String[] args)
    {
        //taking inputs from the users
        Scanner in = new Scanner(System.in);
        System.out.println("Enter first number");
        int num1 = in.nextInt();
        System.out.println("Enter second number");
        int num2 = in.nextInt();
        System.out.println("Enter third number");
        int num3 = in.nextInt();
        System.out.println();

        //checking that (num1+num2=num3)
        System.out.println("Checking................ \nNumber-1 + Number-2 = Number-3\ni.e.");
        if(((num1+num2)==num3)||((num2+num1)==num3))
        {
            System.out.println(" "+num1+" + "+num2+" = "+num3);
            System.out.println("=>True");
        }
        else
        {
            System.out.println("=>False"); 
        }
    }    
}
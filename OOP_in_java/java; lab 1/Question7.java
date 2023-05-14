//program that takes a number as input and prints its multiplication table upto 10.
import java.util.Scanner;
class Question7 
{
    public static void main(String[] args)
    {
        int num;
        Scanner in = new Scanner(System.in);
        //taking any number from the users for its multiplication table
        System.out.println("Enter any number for its multiplication table: ");
        num = in.nextInt();
        System.out.println();
        System.out.println("Multiplication table of "+num+":");

        //using FOR-loop to print the multiplication table of the number
        for(int i=1;i<=10;i++)
        {
            System.out.println(""+num+"X"+""+i+"= "+(num*i));
        }
    }    
}
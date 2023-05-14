//program that takes three numbers as imput to calculate and print the average of the nubmers.
import java.util.Scanner;
class Question12
{
    public static void main(String[] args)
    {
        float num1,num2,num3;

        Scanner in = new Scanner(System.in);

        //taking inputs form the users
        System.out.println("Enter the First number: ");
        num1 = in.nextInt();
        System.out.println("Enter the Second number: ");
        num2 = in.nextInt();
        System.out.println("Enter the Third number: ");
        num3 = in.nextInt();
        System.out.println();

        //printing the result of an average of the three numbers
        float average = (num1+num2+num3)/3;
        System.out.println("Average of "+num1+", "+num2+", and "+num3+" = "+average);
    }
}
//program to swap two variables
import java.util.Scanner;
class Question14
{
    public static void main(String[] args)
    {
        int a,b;
        int temp;
        Scanner in = new Scanner(System.in);

        //taking inputs from the users
        System.out.println("Enter the value of a = ");
        a = in.nextInt();

        System.out.println("Enter the value of b = ");
        b = in.nextInt();

        System.out.println();
        //printing the numbers before swapping
        System.out.println("Before Swapping,");
        System.out.println("a = "+a+", b = "+b);

        System.out.println();
        //Swapping the two nubmers a and b;
        temp=a;
        a = b;
        b = temp;
        //printing the numbers after swapping
        System.out.println("After Swapping,");
        System.out.println("a = "+a+", b = "+b);
    }
}
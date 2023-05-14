//program to print the ASCII value of a given character
import java.util.Scanner;
class Question38 
{
    public static void main(String[] args)
    {
        Scanner in = new Scanner(System.in);
        System.out.println("Enter any character: ");
        char character = in.next().charAt(0);
        int value = (int)character;
        System.out.println("ASCII value = "+value);
    }    
}
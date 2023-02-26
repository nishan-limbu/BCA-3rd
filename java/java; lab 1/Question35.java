//program to reverse the string
import java.util.Scanner;
class Question35
{
    public static void main(String[] args)
    {
        Scanner in = new Scanner(System.in);
        System.out.print("Enter a stirng: ");
        char[] word = in.nextLine().toCharArray();

        System.out.print("Reverse String:");
        for(int i=word.length-1;i>=0;i--)
        {
            System.out.print(word[i]);
        }
        System.out.println();
    }
}
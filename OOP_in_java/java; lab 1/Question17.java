//program to convert a decimal to binary number
import java.util.Scanner;
class Question17 
{
    public static void main(String[] args)
    {
        int binary[] = new int[50];
        int i=0;
        Scanner in = new Scanner(System.in);
        System.out.println("Enter any decimal number: "); 
        int num = in.nextInt();
        System.out.println();
        System.out.println("Answer: ");
        while(num>0)
        {
            binary[i++] = num%2;
            num = num/2;
        }
        for(int j=(i-1);j>=0;j--)
        {
            System.out.println(binary[j]);
        }
    }   
}
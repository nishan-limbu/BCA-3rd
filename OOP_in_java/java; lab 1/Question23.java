//program to convert a octal to decimal number
import java.util.Scanner;
class Question23 
{
    public static void main(String[] args)
    {
        int i=0,decimal=0;
        Scanner in = new Scanner(System.in);
        System.out.println("Enter any octal number: "); 
        int octal = in.nextInt();
        System.out.println();
        System.out.println("Answer: ");
        while(octal!=0)
        {
            decimal += (octal%10)*Math.pow(8,i);
            ++i;
            octal = octal/10;
        }
        System.out.println("Conversion of Octal to decimal number = "+decimal);
    }   
}
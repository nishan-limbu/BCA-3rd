//program to convert octal to binary number
import java.util.Scanner;
class Question24 
{
    public static void main(String[] args)
    {
        int decimal=0,i=0;
        long binary=0;

        Scanner in = new Scanner(System.in);
        System.out.println("Enter Octal number: "); 
        int octal = in.nextInt();
        System.out.println();
        System.out.println("Answer: ");

        while(octal!=0)
        {
            decimal += (octal%10)*Math.pow(8,i);
            ++i;
            octal = octal/10;
        }
        i=1;
        while(decimal!=0)
        {
            binary += (decimal%2)*i;
            decimal = decimal/2;
            i = i*10;
        }
        System.out.println("Conversion of Binary to octal number = "+binary);   
    }   
}
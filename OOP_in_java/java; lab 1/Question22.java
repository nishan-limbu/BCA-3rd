//program to convert binary to octal number
import java.util.Scanner;
class Question22 
{
    public static void main(String[] args)
    {
        int octal=0,decimal=0,i=0;

        Scanner in = new Scanner(System.in);
        System.out.println("Enter Binary number: "); 
        long binary = in.nextLong();
        System.out.println();
        System.out.println("Answer: ");

        while(binary!=0)
        {
            decimal += (binary%10)*Math.pow(2,i);
            ++i;
            binary = binary/10;
        }
        i=1;
        while(decimal!=0)
        {
            octal += (decimal%8)*i;
            decimal = decimal/8;
            i = i*10;
        }
        System.out.println("Conversion of Binary to octal number = "+octal);   
    }   
}
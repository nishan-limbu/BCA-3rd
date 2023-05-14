//program to convert octal to hexadecimal number
import java.util.Scanner;
class Question25 
{
    public static void main(String[] args)
    {
        int octal,decimal=0,i=0,rem;
        String hexdec = "";
        //hexadecimal numbers:
        char hex[] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};

        Scanner in = new Scanner(System.in);
        System.out.println("Enter Octal number: "); 
        octal = in.nextInt();
        System.out.println();
        System.out.println("Answer: ");

        while(octal!=0)
        {
            decimal += (octal%10)*(int)Math.pow(8,i);
            i++;
            octal = octal/10;
        }
        i=1;
        while(decimal!=0)
        {
            rem = decimal%16;
            hexdec =hex[rem]+hexdec;
            decimal = decimal/16;
        }
        System.out.println("Conversion of Binary to octal number = "+hexdec); 
    }   
}
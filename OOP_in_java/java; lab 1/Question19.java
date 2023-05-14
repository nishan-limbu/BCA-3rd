//program to convert a decimal to octal number
import java.util.Scanner;
class Question19 
{
    public static void main(String[] args)
    {
        int i=1,octal=0;
        Scanner in = new Scanner(System.in);
        System.out.println("Enter any decimal number: "); 
        int num = in.nextInt();
        System.out.println();
        System.out.println("Answer: ");
        while(num!=0)
        {
            octal += (num%8)*i;
            num = num/8;
            i = i*10;
        }
        System.out.println("Conversion of Decimal to Octal number = "+octal);
    }   
}
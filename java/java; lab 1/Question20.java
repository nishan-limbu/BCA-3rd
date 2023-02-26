//program to convert binary to decimal number
import java.util.Scanner;
class Question20 
{
    public static void main(String[] args)
    {
        int i=0,decimal=0;
        Scanner in = new Scanner(System.in);
        System.out.println("Enter Binary number: "); 
        int binary = in.nextInt();
        System.out.println();
        System.out.println("Answer: ");
        while(true)
        {
            if(binary==0)
            {
                break;
            }
            else
            {
                int temp=binary%10;
                decimal += temp*Math.pow(2,i);
                binary = binary/10;
                i++;
            }
            
        }
        System.out.println("Conversion of Binary to Decimal number = "+decimal);
    }   
}
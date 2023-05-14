//program to multiply two binary numbers
import java.util.Scanner;
class Question16
{
    public static void main(String[] args)
    {
        long binary1,binary2,multiply=0;
        int digit,factor=1;
        Scanner in = new Scanner(System.in);
        System.out.print("Enter first binary number: ");
        binary1 = in.nextLong();
        System.out.print("Enter second binary number: ");
        binary2 = in.nextLong();

        while(binary2!=0)
        {
            digit = (int)(binary2%10);
            if(digit==1)
            {
                binary1 = binary1 * factor;
                multiply = Multiply((int)binary1,(int)multiply);
            }
            else
            {
                binary1 = binary1*factor;
            }
            binary2 = binary2/10;
            factor = 10;
        }
        System.out.println("Multiplication of two binary numbers = "+multiply);
    }
    static int Multiply(int binary1, int binary2)
    {
        int i=0,remainder=0;
        int []sum = new int[20];
        int result=0;

        while(binary1!=0 || binary2!=0)
        {
            sum[i++] = (binary1%10+binary2%10+remainder)%2;
            remainder = (binary1%10+binary2%10+remainder)/2;
            binary1 = binary1/10;
            binary2 = binary2/10;
        }
        if(remainder!=0)
        {
            sum[i++] = remainder; 
        }
        --i;
        while(i>=0)
        {
            result = result*10+sum[i--];
        }
        return result;
    }
}
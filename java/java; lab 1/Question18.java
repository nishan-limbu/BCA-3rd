//program to convert a decimal to hexadecimal number
import java.util.Scanner;
class Question18 
{
    public static void main(String[] args)
    {
        int rem;
        String str = "";
        //hexadecimal numbers:
        char hex[] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
        Scanner in = new Scanner(System.in);
        System.out.println("Enter any decimal number: "); 
        int num = in.nextInt();
        System.out.println();
        System.out.println("Answer: ");
        while(num>0)
        {
            rem = num%16;
            str = hex[rem]+str;
            num = num/16;
        }
        System.out.println("Conversion of decminal number to hexadecimal = "+str);
    }   
}
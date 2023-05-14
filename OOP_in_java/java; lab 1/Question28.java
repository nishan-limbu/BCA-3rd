//program to convert a hexadecimal to octal number
import java.util.Scanner;
class Question28
{
    public static int Conversion(String str)
    {
        String digit = "0123456789ABCDEF";
        str = str.toUpperCase();
        int value = 0;
        for(int i=0;i<str.length();i++)
        {
            char character = str.charAt(i);
            int d = digit.indexOf(character);
            value = 16*value+d;
        }
        return value;
    }
    public static void main(String[] args)
    {
        String hexnum;
        int decimal,i=1,j;
        int [] octal =new int[100];
        Scanner in = new Scanner(System.in);
        System.out.print("Enter Hexadecimal number: "); 
        hexnum = in.nextLine();
        
        decimal = Conversion(hexnum);

        //converting decimal to octal
        while(decimal!=0)
        {
            octal[i++] = decimal%8;
            decimal = decimal/8;
        }
        System.out.print("Conversion of hexadecimal to octal :");
        for(j=i-1;j>0;j--)
        {
            System.out.print(octal[j]);
        }
        System.out.println();
    }   
}
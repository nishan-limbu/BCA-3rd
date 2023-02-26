//program to convert a hexadecimal to decimal number
import java.util.Scanner;
class Question26
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
        int decimal;
        Scanner in = new Scanner(System.in);
        System.out.print("Enter Hexadecimal number: "); 
        hexnum = in.nextLine();
        
        decimal = Conversion(hexnum);
        
        System.out.print("Conversion of hexadecimal to decimal = "+decimal);
    }   
}
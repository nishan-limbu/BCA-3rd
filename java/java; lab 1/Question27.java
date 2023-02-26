//program to convert a hexadecimal to bianry number
import java.util.Scanner;
class Question27
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
        int [] binary =new int[100];
        Scanner in = new Scanner(System.in);
        System.out.print("Enter Hexadecimal number: "); 
        hexnum = in.nextLine();
        
        decimal = Conversion(hexnum);

        //converting decimal to binary
        while(decimal!=0)
        {
            binary[i++] = decimal%2;
            decimal = decimal/2;
        }
        System.out.print("Conversion of hexadecimal to binary :");
        for(j=i-1;j>0;j--)
        {
            System.out.print(binary[j]);
        }
        System.out.println();
    }   
}
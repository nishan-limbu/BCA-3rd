//program to convert binary to hexadecimal number
import java.util.Scanner;
class Question21 
{
    public static void main(String[] args)
    {
        int hex,m=1,c=1,i=0;
        char[] hexnum = new char[20];

        Scanner in = new Scanner(System.in);
        System.out.println("Enter Binary number: "); 
        int binary = in.nextInt();
        System.out.println();
        System.out.println("Answer: ");

        for(hex=0; binary!=0; binary=binary/10)
        {
            hex= hex+((binary%10)*m);
            if(c%4==0)
            {
                if(hex<10)
                {
                    hexnum[i] = (char)(hex+48);
                }
                else
                {
                    hexnum[i] = (char)(hex+55);
                }
                m=1;
                c=1;
                hex=0;
                i++;
            }
            else
            {
                m = m*2;
                c++;
            }
        }
        if(c!=1)
        {
            hexnum[i] = (char)(hex+48);
        }
        if(c==1)
        {
            i--;
        }
        System.out.println("Conversion of Binary to Hexadecimal number = ");
        for(i=1;i>=0;i--)
        {
            System.out.println(hexnum[i]);
        }
        
    }   
}
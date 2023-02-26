//program to accept number and check if it is odd of even. print '0' if it is odd and '1' for even
import java.util.Scanner;
class Question45 
{
    public static void main(String[] args)
    {
        Scanner in = new Scanner(System.in);
        System.out.println("Enter any positive number: ");
        int num = in.nextInt();//assigning numbers from users
        System.out.println();    

        //chceking the number as odd or even
        if(num%2==0)
        {
            System.out.println("Value = 1, i.e, "+num+" is even number.");    
        }
        else
        {
            System.out.println("Value = 0, i.e, "+num+" is odd number.");    
        }    
    }    
}
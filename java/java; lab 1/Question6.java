//program to print sum, multiply, subtract, divide and remainder of two numbers.
import java.util.Scanner;
class Question6
{
    public static void main(String[] args)
    {
        int add,sub,mul,div,rem;

        //taking two numbers from the user
        Scanner in = new Scanner(System.in);
        System.out.println("Enter the first number that is greater than asecond number: ");
        int num1=in.nextInt(); 
        System.out.println("Enter the first number that is less than first number: ");
        int num2=in.nextInt();   
        
        while(true)
        {
            //showing the menu-driven for different operations
            System.out.println("1. Addition");
            System.out.println("2. Subtraction");
            System.out.println("3. Multiplication");
            System.out.println("4. Division");
            System.out.println("5. Remainder");
            System.out.println("6. Exit");
            System.out.println();
            
            System.out.println("Choose any numbers for operation:");
            int option=in.nextInt();//choosing any option from users.
            System.out.println();
            switch(option)
            {
                case 1:
                    add=(num1+num2);
                    System.out.println("Addition = "+add);
                    break;
                case 2:
                    sub=(num1-num2);
                    System.out.println("Subtraction = "+sub);
                    break;
                case 3:
                    mul=(num1*num2);
                    System.out.println("Multiplication = "+mul);
                    break;
                case 4:
                    div=(num1/num2);
                    System.out.println("Division = "+div);
                    break;
                case 5:
                    rem=(num1%num2);
                    System.out.println("Remainder = "+rem);
                    break;
                case 6:
                    System.exit(0);
                    break;
                default:
                    System.out.println("Error!!");
                    System.out.println("Choose the options only..");
                    break;
            }
        }
    }
}
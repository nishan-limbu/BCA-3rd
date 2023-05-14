//program to input and display our password
import java.io.Console;
class Question39 
{
    public static void main(String[] args)
    {
        //obtaining a reference to the Console
        Console obj = System.console();

        //checking if there is no console available, then exit
        if(obj==null)
        {
            System.out.print("No console available");
            return;
        }
        //reading password and then displaying it
        System.out.println("Enter your Password: ");
        char[] character = obj.readPassword();
        //password saved char type

        //converting char array into string
        String password = String.valueOf(character);
        System.out.println("Your Password = "+password);
    }    
}
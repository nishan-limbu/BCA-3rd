//program to coompute the sum of the digits of an integer
import java.util.Scanner;
class Question31
{
  public static void main(String[] args)
  {
    int sum=0,digit;

    //taking input from users
    Scanner in = new Scanner(System.in);
    System.out.print("Input an integer: ");
    int number = in.nextInt();

    while(number>0)
    {
      //finding last digit of the given number
      digit = number%10;
      //adds last digit to variable sum
      sum = sum+digit;
      //removes the last digit from the number
      number = number/10;
    }
    //printing the results
    System.out.println("Sum of Digits : "+sum);
  }
}
//program to convert a string to an integer in Java
class Question47 
{
    public static void main(String[] args)
    {
        String str = "123";
        int num1=110;

        //converting string to int in java using valueOf() method
        int num2 = Integer.valueOf(str);

        //adding num1 and num2
        int sum = num1+num2;
        System.out.println("Answer: "+sum);
    }    
}
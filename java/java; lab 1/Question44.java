//program to print the odd numbers fromm 1 to 99 and printing one number per line
class Question44 
{
    public static void main(String[] args)
    {
        int result;

        System.out.println("Odd numbers from 1 to 99:");
        for(int i=1;i<100;i++)
        {
            result = (2*i-1);
            if(result<100)
            {
                System.out.println(result);
            }
        }
    }    
}
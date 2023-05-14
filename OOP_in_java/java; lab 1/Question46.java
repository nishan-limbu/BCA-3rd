//program to print numbers betwee 1 to 100 that are divisible by 3, 5 and both
class Question46
{
    public static void main(String[] args)
    {
        //printing numbers that is divisible by 3
        System.out.println("Divisible by 3:");
        for(int i=1;i<=100;i++)
        {
            if(i%3==0)
            {
                System.out.print((i++)+", ");
            }
        }

        //printing numbers that is divisible by 5
        System.out.println("\n\nDivisible by 5:");
        for(int i=1;i<=100;i++)
        {
            if(i%5==0)
            {
                System.out.print(i+", ");
            }
        }

        //printing numbers that is divisible by both
        System.out.println("\n\nDivisible by both (3 and 5):");
        for(int i=1;i<=100;i++)
        {
            if((i%3==0)&&(i%5==0))
            {
                System.out.print((i++)+", ");
            }
        }
    }
}
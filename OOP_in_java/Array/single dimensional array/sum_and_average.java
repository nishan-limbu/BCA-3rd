class sum_and_average 
{
    public static void main(String[] args) 
    {
        double[] num={10.0,20.0,30.0,40.0,50.0}; 
        double avg = 0.0;
        double sum = 0.0;
        // Find the sum of these numbers.
        for(int i = 0; i < num.length; i++)
        {
            sum  = sum + num[i];
        }
            
        avg = sum/num.length;
        System.out.println("Sum of six numbers: " +sum);
        System.out.println("Average of six numbers: " +avg);
     }
}
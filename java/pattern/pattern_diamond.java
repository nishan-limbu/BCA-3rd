class pattern_diamond
{
    public static void main(String[] args)
    {
        int i,k,j;
        
        for(i=1;i<=5;i++) //for rows
        {
            for(j=5;j>i;j--) //for space(column)
            {
                System.out.print(" ");
            }
            for(k=1;k<=(2*i-1);k++) //for pattern(*)
            {
                System.out.print("*");
            }
            System.out.println();
        }

        for(i=5-1;i>=1;i--) //for rows
        {
            for(j=5;j>i;j--) //for space(column)
            {
                System.out.print(" ");
            }
            for(k=1;k<=(2*i-1);k++) //for pattern(*) 
            {
                System.out.print("*");
            }
            System.out.println();
        }
    }
}
//program to print 2-D array in tabular formats
class tabular_format
{
    public static void main(String[] args)
    {
        int[][] num={{1,2},{4,3}};

        for(int i=0;i<num.length;i++)
        {
            for(int j=0;j<num.length;j++)
            {
                System.out.println(num[i][j]+" ");
            }
            System.out.println();
        }
    }
    
}
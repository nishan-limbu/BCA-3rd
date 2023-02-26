//program to print the elements of a multi-dimensional array
class print_numbers
{
    public static void main(String[] args)
    {
        int[][] num={{1,2},{4,3}};

        for(int i=0;i<num.length;i++)
        {
            for(int j=0;j<num.length;j++)
            {
                System.out.println("Number["+i+"]["+j+"]="+num[i][j]);
            }
        }
    }
    
}
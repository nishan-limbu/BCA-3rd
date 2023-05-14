/*program to create and display unique three-digits number using 1,2,3,4. 
and counting how many three-digits numbers are there
*/
class Question37 
{
    public static void main(String[] args)
    {
        int total=0;
        for(int i=1;i<=4;i++)
        {
            for(int j=1;j<=4;j++)
            {
                for(int k=1;k<=4;k++)
                {
                    if(k!=i && k!=j && i!=j)
                    {
                        total++;
                        System.out.print(i+""+j+""+k+", ");
                    }
                }
            }
        }
        System.out.println("\n\nTotal number of three-digit : "+total);
    }    
}
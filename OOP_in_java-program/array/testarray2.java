//declaration, instantiation eand initialization of multi-dimensional array in java array.
class testarray2
{
	public static void main(String[] args)
	{
		int[][] a={{2,3,5},{6,7,5},{1,2,4}};
		for(int i=0;i<3;i++)
		{
			for(int j=0;j<3;j++)
			{
				System.out.println(""+a[i][j]);
			}
			System.out.println();
		}
	}
}
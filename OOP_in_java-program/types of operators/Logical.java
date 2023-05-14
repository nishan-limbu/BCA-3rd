//AND,OR and NOT operations in java program
class Logical
{
	public static void main(String[] args)
	{
		int a=90;
		int b=82;
		if((a>b)&&(b<a))
		{
			System.out.println("a is greater than b");
		}
		if((a<b)||(b>a))
		{
			System.out.println("b is greater than a");
		}
		if(a!=b)
		{
			System.out.println("a is not equal to b");
		}
		
	}
}
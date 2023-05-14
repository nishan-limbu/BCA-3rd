//Assignment operations(+=,-=,*=,/=,etc..) in java program
class Assignment
{
	public static void main(String[] args)
	{
		int a=90;
		int b=2;
		int x1=10,y1=20,x2=30,y2=40;
		x1 +=a;
		x2 -=b;
		y1 *=a;
		y2 /=b;
		System.out.println("Value of (x1 += a)= "+ x1);
		System.out.println("Value of (x2 -= b)= "+x2);
		System.out.println("Value of (y1 *= a)= "+y1);
		System.out.println("Value of (y2 /= b)= "+y2);
		
	}
}
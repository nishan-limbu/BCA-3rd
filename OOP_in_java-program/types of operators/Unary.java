//increment and decrement(Unary operator) operations in java program
class Unary
{
	public static void main(String[] args)
	{
		int a=90;
		int b=82;
		int x1,y1,x2,y2;
		x1= (++a);
		y1= (++b);
		
		//displaying increment of a and b;	
		System.out.println("Increment of a = " + x1 +"and b = " + y1);
		
		//displaying decrement of c and d;
		int c=90;
		int d=82;
		x2=(--c);
		y2=(--d);
		System.out.println("Decrement of c = "+ x2 +"and d = "+ y2);
		
		
	}
}
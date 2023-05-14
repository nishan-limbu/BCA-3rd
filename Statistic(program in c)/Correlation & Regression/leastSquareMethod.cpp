//program fitting the least Square line of the given data
#include<stdio.h>
#include<math.h>
int main()
{
	int x[50],y[50];
	int n,i,a1=0,a2=0,a3=0,a4=0,a5=0;;
	float a,b;
	printf("Enter total number of values of X and Y: ");
	scanf("%d",&n);
	//taking inputs of X from users
	printf("Enter the data of 'X' : \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&x[i]);
	}
	//taking inputs of Y from users
	printf("Enter the data of'Y' : \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&y[i]);
	}
	printf("\n");
	//using for-loop to add all the data of X and 
	//showing the table
	printf("The table is shown below: \n");
	printf("````````````````````````````````````\n");
	printf("X\tY\tX*Y\tX^2\tY^2\n");
	printf("````````````````````````````````````\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t%d\t%d\t%d\t%d\n",x[i],y[i],(x[i]*y[i]),(x[i]*x[i]),(y[i]*y[i]));
		a1 +=x[i];
		a2 +=y[i];
		a3 +=(x[i]*y[i]);
		a4 +=((x[i])*(x[i]));
		a5 +=((y[i]*y[i]));
	}
	printf("...................................\n");
	printf("%d\t%d\t%d\t%d\t%d\n",a1,a2,a3,a4,a5);
	printf("...................................\n");
	printf("We hava,\n\tTotal number of data(n) : %d\n\tSum of X : %d\n\tSum of Y : %d\n\tSum of X*Y : %d\n\tSum of (X^2) : %d\n\tSum of (Y^2) : %d\n",n,a1,a2,a3,a4,a5);
	
	//putting the above results to fnd 'a' and 'b'
	a = a2-(b*a1);
	b = (a3-(a*a1))/a4;
	printf("Value of b = %.2f",b);
	
	return 0;
}

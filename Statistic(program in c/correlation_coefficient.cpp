//program to find the Karl Perarson's Co-efficient of correlation by using (Direct Method).
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	int x[50],y[50];
	int n,i,a1=0,a2=0,a3=0,a4=0,a5=0;
	float r;//r = correlatin
	
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
	//using for-loop to add all the data of X.

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
	//printig the outputs and correlation
	printf("We hava,\n\tSum of X : %d\n\tSum of Y : %d\n\tSum of (X*Y) : %d\n\tSum of (X^2) : %d\n\tSum of (Y^2) : %d\n",a1,a2,a3,a4,a5);
	printf("\nKarl Pearson's Coefficient of Correlation : \n");
	r = (n*a3-(a1*a2))/(sqrt((n*a4)-(a1*a1))*sqrt((n*a5)-(a2*a2)));
	printf("r = %.4f",r);
	
	return 0;	
}

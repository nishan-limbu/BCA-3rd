//program to find the Karl Perarson's Co-efficient of correlation by using Deviation from assumed Mean Method.
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	int x[50],y[50];
	int n,i,a1=0,a2=0,a3=0,a4=0,a5=0,a6=0,a7=0;
	int mean1,mean2;
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
	printf("Enter Assumed Mean of X-series: ");
	scanf("%d",&mean1);
	printf("Enter Assumed Mean of Y-series: ");
	scanf("%d",&mean2);
	printf("\n");
	//using for-loop to add all the data of X and
	//showing the table
	printf("The table is shown below: \n");
	printf("```````````````````````````````````````````````````````````\n");
	printf("X\tY\tU\tV\tU*V\tU^2\tV^2\n");
	printf("```````````````````````````````````````````````````````````\n");
	
	for(i=0;i<n;i++)
	{
		printf("%d\t%d\t%d\t%d\t%d\t%d\t%d\n",x[i],y[i],(x[i]-mean1),(y[i]-mean2),((x[i]-mean1)*(y[i]-mean2)),((x[i]-mean1)*(x[i]-mean1)),((y[i]-mean2)*(y[i]-mean2)));
		a1 += x[i];
		
		a2 += y[i];
		a3 += (x[i]-mean1);
		a4 += (y[i]-mean2);
		a5 += ((x[i]-mean1)*(y[i]-mean2));
		a6 += ((x[i]-mean1)*(x[i]-mean1));
		a7 += ((y[i]-mean2)*(y[i]-mean2));
	}
	printf("..........................................................\n");
	printf("%d\t%d\t%d\t%d\t%d\t%d\t%d\n",a1,a2,a3,a4,a5,a6,a7);
	printf("..........................................................\n");
	//printig the outputs and correlation
	printf("We hava,\n\tSum of U : %d\n\tSum of V : %d\n\tSum of (U*V) : %d\n\tSum of (U^2) : %d\n\tSum of (V^2) : %d\n",a3,a4,a5,a6,a7);
	printf("\nKarl Pearson's Coefficient of Correlation : \n");
	r = (n*a5-(a3*a4))/(sqrt((n*a6)-(a3*a3))*sqrt((n*a7)-(a4*a4)));
	printf("r = %.4f",r);
	printf("\nTherefore, the Karl Pearson's co-efficient of correlation by using Derivation from Assumed Mean method is %.4f.",r);
	
	return 0;	
}

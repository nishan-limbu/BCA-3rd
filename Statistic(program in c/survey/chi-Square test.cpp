#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	float n,f[50];
	int i;
	float sum,value;
	float start,end,high,low,m,interval,diff;
	printf("Enter the total class-intervals : ");
	scanf("%f",&n);
	printf("Enter the starting point in a class-interval: ");
	scanf("%f",&start);
	printf("Enter the ending point in a class-interval: ");
	scanf("%f",&end);
	printf("Enter the frequency serially : \n");
	for(i=0;i<n;i++)
	{
		scanf("%f",&f[i]);
	}
	
	diff=(end-start)/n;
	printf("Enter the highest point in first class-interval: ");
	scanf("%f",&high);
	printf("Enter the lowest point in first class-interval: ");
	scanf("%f",&low);
	interval=(high-low)/2;
	m=interval;
	printf("Solution,\n");
	printf("class-interval(X)     frequency(f)     ((0i-Ei)^2)/Ei\n");//Ei = expected frequency=number of classes, Oi = observed frequency
	
	for(i=0;i<n;i++)
	{
		printf("%.2f-%.2f\t\t%.2f\t\t%.2f\n",low+i*0.1,high+i*0.1 ,f[i],(((f[i]-n)*(f[i]-n))/n));
		sum +=(((f[i]-n)*(f[i]-n))/n);
	}
	printf("\nChi-Square = %.3f",sum);
	printf("\n Enter the value of chi-square from the table: ");
	scanf("%f",&value);
	if(value>sum)
	{
		printf("\n%.3f is greater than %.3f. So the null hypothesis (H0) is accepted.",value, sum);
	}
	else if(value<sum)
	{
		printf("\n%.3f is less than %.3f. So the null hypothesis (H0) is not accepted.",value, sum);
	}
	return 0;
}

/*program calculating the student's t distribution for one variable:
*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	float data[50];
	int i;
	float n,N,sum,sum2,standard,t,table_value;
	float mean=0;
	printf("Enter the total number of sample(n): ");
	scanf("%f",&n);
	printf("Enter the total number of population sample(N): ");
	scanf("%f",&N);
	
	printf("Enter datas of sample: \n");
	for(i=0;i<n;i++)
	{
		printf("data[%d] = ",i);
		scanf("%f",&data[i]);
	}
	
	for(i=0;i<n;i++)
	{
		sum +=data[i];
	}
	mean=sum/n;
	printf("\nTable is shown below:\n");
	printf("X\t\t(X-Mean)*(X-Mean)\n");
	printf("```````````````````````````````````````\n");
	for(i=0;i<n;i++)
	{
		printf("%.2f\t\t\t%.3f\n",data[i],((data[i]-mean)*(data[i]-mean)));
		sum2 +=(data[i]-mean)*(data[i]-mean);
	}
	printf("```````````````````````````````````````\n");
	printf("\nHere,\n\t(X-Mean)^2 = %.3f",sum2);
	
	standard = sqrt(sum2/(n-1));
	t = ((100-mean)/standard)*sqrt(n);
	printf("\nt distribution = %.3f",t);
	
	printf("\nEnter the value of t(0.05) from the table: ");
	scanf("%f",&table_value);
	
	if (t<table_value)
	{
		printf("\nThe value of table_value is greater than t. So, it is accepted.");
	}
	else
	{
		printf("\nThe value of table_value is less than t. So, it is not accepted.");
	}
	return 0;
}

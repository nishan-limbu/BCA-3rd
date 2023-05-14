/*
program calculating the student's t distribution for two variable:
*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	float data1[50],data2[50];
	int i;
	float n1,n2,sum1,sum2,sum3,sum4,standard,t,table_value;
	float mean1=0,mean2=0;
	printf("Enter the total number of sample(n1): ");
	scanf("%f",&n1);
	printf("Enter the total number of sample(n2): ");
	scanf("%f",&n2);
	
	printf("Enter datas of sample X: \n");
	for(i=0;i<n1;i++)
	{
		printf("data1[%d] = ",i);
		scanf("%f",&data1[i]);
	}
	
	printf("Enter datas of sample Y: \n");
	for(i=0;i<n2;i++)
	{
		printf("data2[%d] = ",i);
		scanf("%f",&data2[i]);
	}
		
	for(i=0;i<n1;i++)
	{
		sum1 +=data1[i];
	}
	mean1=sum1/n1;
	
	for(i=0;i<n2;i++)
	{
		sum3 +=data2[i];
	}
	mean2=sum3/n2;
	
	
	printf("\nTable-1 is shown below:\n");
	printf("X\t\t(X-Mean_X)^2\n");
	printf("``````````````````````````````\n");
	for(i=0;i<n1;i++)
	{
		printf("%.2f\t\t%.3f\n",data1[i],((data1[i]-mean1)*(data1[i]-mean1)));
		sum2 +=((data1[i]-mean1)*(data1[i]-mean1));
	}
	printf("``````````````````````````````\n");
	printf("\nTable-2 is shown below:\n");
	printf("Y\t\t(Y-Mean_Y)^2\n");
	printf("``````````````````````````````\n");
	for(i=0;i<n2;i++)
	{
		printf("%.2f\t\t%.3f\n",data2[i],((data2[i]-mean2)*(data2[i]-mean2)));
		sum4 +=((data2[i]-mean2)*(data2[i]-mean2));
	}
	printf("``````````````````````````````\n");
	printf("\nHere,\n\t(X-Mean_X)^2 = %.3f\n\t(Y-Mean_Y)^2 = %.3f",sum2,sum4);
	
	standard = sqrt((sum2+sum4)/(n1+n2-2));
	t = (((mean1-mean2)/standard)*sqrt((1/n1)+(1/n2)));
	printf("\nt distribution = %.3f",t);
	
	printf("\nEnter the value of t(0.05) from the table: ");
	scanf("%f",&table_value);
	
	if (t<table_value)
	{
		printf("\nThe value of table_value is greater than t. So, it is accepted.");
	}
	else  if (t<table_value)
	{
		printf("\nThe value of table_value is less than t. So, it is not accepted.");
	}
	return 0;
}

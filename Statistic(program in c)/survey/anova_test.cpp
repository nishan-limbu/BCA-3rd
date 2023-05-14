//program demonstrating the ANOVA test by using one way method of only 3 sample

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int i;
	float n,d1[10],d2[10],d3[10];
	float m1,m2,m3,mean1=0,mean2=0,mean3=0;
	
	
	printf("Enter total number of data in each sample: ");
	scanf("%f",&n);	
	//taking the data of each samples from users
	printf("\nEnter the data of A sample: \n");
	for(i=0;i<n;i++)
	{
		printf("d1[%d] = ",i);
		scanf("%f",&d1[i]);
	}
	printf("\nEnter the data of B sample: \n");
	for(i=0;i<n;i++)
	{
		printf("d2[%d] = ",i);
		scanf("%f",&d2[i]);
	}
	printf("\nEnter the data of C sample: \n");
	for(i=0;i<n;i++)
	{
		printf("d3[%d] = ",i);
		scanf("%f",&d3[i]);
	}
	//printing the mean of each of the sample
	for(i=0;i<n;i++)
	{
		m1 +=d1[i];
		m2 +=d2[i];
		m3 +=d3[i];
	}
	mean1 = m1/n;
	mean2 = m2/n;
	mean3 = m3/n;
	
	return 0;
}

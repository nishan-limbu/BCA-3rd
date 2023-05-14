/*Calculating the following in Statics:
1. combined Mean
2. Combined Standard Deviation 
*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void combined_mean();
void combined_standard();
int main()
{	
	int choose;
	
	printf("\nMenu-Driven:");
	printf("\n``````````````");
	printf("\n1. Combined Mean\n2. Combined Standard Deviation\n");
	printf("\nEnter the following:");
	scanf("%d",&choose);
	switch(choose)
	{
		case 1:
			combined_mean();
			break;
		case 2:
			combined_standard();
			break;
		default:
			printf("\nInvalid!!!!");
			break;
	}
	return 0;
}
void combined_mean()
{
	int i;
	int N;
	float mean[50],num[50],total_sum,total_num;
	
	printf("Enter the total number of combined mean : ");
	scanf("%d",&N);
	printf("\nEnter the value of Means : \n");
	for(i=0;i<N;i++)
	{
		printf("Mean(%d) : ",i);
		scanf("%f",&mean[i]);
	}
	printf("\nEnter the Numbers: \n");
	for(i=0;i<N;i++)
	{
		printf("Number(%d) : ",i);
		scanf("%f",&num[i]);
	}
	for(i=0;i<N;i++)
	{
		total_sum +=(mean[i]*num[i]);
	}
	for(i=0;i<N;i++)
	{
		total_num +=num[i];
	}
	printf("\nCombined Mean (X12) = %.2f",(total_sum/total_num));
}
void combined_standard()
{
	int i;
	int N;
	float mean[50],num[50],standard[50],total_sum,total_num;
	float cm,sum;
	printf("Enter the total number of Combined Mean and Standard Deviation : ");
	scanf("%d",&N);
	printf("\nEnter the value of Means : \n");
	for(i=0;i<N;i++)
	{
		printf("Mean(%d) : ",i);
		scanf("%f",&mean[i]);
	}
	printf("\nEnter the valuse of Standard Deviation : \n");
	for(i=0;i<N;i++)
	{
		printf("Standard Deviation(%d) : ",i);
		scanf("%f",&standard[i]);
	}
	printf("\nEnter the Numbers: \n");
	for(i=0;i<N;i++)
	{
		printf("Number(%d) : ",i);
		scanf("%f",&num[i]);
	}
	printf("\nFor Combined Mean : ");
	printf("\n`````````````````````");
	for(i=0;i<N;i++)
	{
		total_sum +=(mean[i]*num[i]);
	}
	for(i=0;i<N;i++)
	{
		total_num +=num[i];
	}
	cm=(total_sum/total_num);
	printf("\nCombined Mean (X12) = %.2f",cm);
	printf("\nFor combined Standard Deviation: ");
	printf("\n`````````````````````````````````");
	for(i=0;i<N;i++)
	{
		sum +=(num[i]*(((standard[i])*(standard[i]))+((cm-mean[i])*(cm-mean[i]))))/(total_num);
	}
	printf("\nCombined Standard Deviation = %.2f",sqrt(sum));
}

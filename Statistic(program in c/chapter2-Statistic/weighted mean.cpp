//program to calculate weighted Arithmetic Mean
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int str[50],weight[50],index[50];
	int n1,n2;
	float WM;
	float c,d;
	int i,a=0,b=0;
	printf("\nEnter the total number of Weights(W) : ");
	scanf("%d",&n1);
	printf("\nEnter the total number of Index No.(X) : ");
	scanf("%d",&n2);
	printf("\nEnter the name of Groups : \n");
	for(i=0;i<n1;i++)
	{
		scanf("%s",&str[i]);
	}
	printf("\nEnter Weights : \n");
	for(i=0;i<n1;i++)
	{
		printf("Weight [%d] : ",i);
		scanf("%d",&weight[i]);
	}
	printf("\nEnter Index No. (X) : \n");
	for(i=0;i<n2;i++)
	{
		printf("Index No. [%d] : ",i);
		scanf("%d",&index[i]);
	}
	
	//displaying the frequency table
	printf("\nGroups\t\tWeights(W)\tIndex No.(X)\tWX");
	printf("\n`````````````````````````````````````````");
	for(i=0;i<n1;i++)
	{
		printf("\n%c\t%d\t%d\t%d\n",str[i],weight[i],index[i],weight[i]*index[i]);
	}
	printf("\n`````````````````````````````````````````");
	for(i=0;i<n1;i++)
	{
		a+=weight[i];
		b+=(weight[i]*index[i]);
	}
	
	c=a;
	d=b;
	//	finding weighted mena
	WM=b/a;
	printf("\nWeighted Mean = %.2f",WM);
	
	return 0;
}

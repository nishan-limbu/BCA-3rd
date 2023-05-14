#include<stdio.h>
#include<stdlib.h>
int main()
{
	int value[50];
	int sample_mean[50];
	int i,j;
	float n=5.0;
	printf("Enter the values of population variable:\n");
	for(i=0.0;i<n;i++)
	{
		printf("Value[%d]= ",i);
		scanf("%d",&value[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;i<n;j++)
		{
			if(value[j]==value[i])
			{
				break;
			}
			else
			{
				
				printf(" %d     (%.d,%d)   %d\n",i,value[j],value[i],(value[i]+value[j])/2);
			}
		}
	}
	return 0;
}

//program to find the median
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int item[100],N,i,j,temp;
	printf("Enter the total number of items(N): ");
	scanf("%d",&N);
	printf("Enter the items : \n");
	for(i=0;i<N;i++)
	{
		scanf("%d",&item[i]);
	}
	//arranging in ascending order
	for(i=0;i<N;i++)
	{
		for(j=i+1;j<N;j++)
		{
			if(item[i]>item[j])
			{
				temp=item[i];
				item[i]=item[j];
				item[j]=temp;
			}
		}
	}
	printf("Arranging in ascending order:\n");
	for(i=0;i<N;i++)
	{
		printf("%d ",item[i]);
	}
	int a=item[0];
	int b=item[N-1];
	float range=b-a;
	float interval=range/10;
	float interval_num=interval+(10-(interval%10));
	printf("Interval=%.2f",interval);
	printf("Interval Number=%f",interval_num);
	int class_interval=interval+(10-(interval%10));
	printf("\nClass_intervl(i) is %d.",class_interval);
	printf("\nFirst item = %d",a);
	printf("\nLast item = %d",b);
	int d1=a-(a%10);
	int d2=b+(10-(b%10));
	printf("\nClass-interval start from %d\nClass-interval end in %d",d1,d2);
	//determining which interval should be used like 5 or 10.
	
	
	printf("\nClass-interval will be :\n");
	//printing clas-interval
	for(i=0;i<d2;i++)
	{
		printf("%d-%d\n",d1+i*10,d1+ class_interval+i*10);	
	}
	
	return 0;
}

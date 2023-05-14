//program to calculate different Measure of centeral tendency from continuous seeries using only data from the users. They are:
//1. Mean
//2. Median
//3. Mode
//4. Quartile Deviation

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int item[50];
	int N,i,j;
	float a,b,c,d,e,f;
	int temp=0;
	printf("Enter the number of items : ");
	scanf("%d",&N);
	printf("\nEnter the items:\n");
	for(i=0;i<N;i++)
	{
		printf("Item[%d] : ",i);
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
	if(N<=50)
	{
		c=(b-a)/10.00;
	}
	else if(N>50 && N<=100)
	{
		c=(b-a)/15.00;
	}
	a=item[0];
	b=item[N-1];
	
	printf("\nTotal number of class-interval : %.2f",c);
	d=(b-a)/c;//finding the 
	printf("\nd=%.2f",d);
	return 0;
}

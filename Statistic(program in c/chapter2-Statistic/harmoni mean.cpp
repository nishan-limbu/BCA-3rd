//program to find the Harmonic Mean of the following series:
/* 1. Individual Series
   2. Discrete Series
   3. Continuous Series 
*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int item[50],f[50];
int N,i,m;
float a=0,b=0,c,d,HM;
void individual();
void discrete();
void continuous();
int main()
{
	int choose;
	printf("Menu-Driven:");
	printf("\n```````````````````````");
	printf("\n1. Individual\n2. Discrete\n3. Continuous\n4\n4. Exit");
	printf("\n```````````````````````\n");
	
	while(1)
	{
		printf("\nChoose any number : ");
		scanf("%d",&choose);
		
		switch(choose)
		{
			case 1:
				individual();
				break;
			case 2:
				discrete();
				break;
			case 3:
				continuous();
				break;
			
			case 4:
				exit(0);
				break;
			default:
				printf("\nInvalid Errors.....\n");
				break;
		}
	}
	return 0;
}
void individual()
{
	printf("Enter the total number of items: ");
	scanf("%d",&N);
	
	//assinging the items from the users
	printf("Enter the Items:\n");
	for(i=0;i<N;i++) 
	{
		printf("\nitem[%d] : ",i);
		scanf("%d",&item[i]);
	}
	
	//displaying the frequency table:
	printf("\n\nItems  1/Items");
	printf("\n````````````````````");
	for(i=0;i<N;i++) 
	{
		a=item[i];
		d+=(1/a);
		printf("\n%d\t%.2f\n",item[i],(1/a));
		
	}
	printf("\n````````````````````\n");

		HM=(N/d);
	printf("\nHarmonic Mean = %.2f\n",HM);
}
void discrete()
{
	
	printf("Enter the total number of items: ");
	scanf("%d",&N);
	
	//assinging the items from the users
	printf("Enter the Items:\n");
	for(i=0;i<N;i++) 
	{
		printf("\nitem[%d] : ",i);
		scanf("%d",&item[i]);
	}
	//assigning the frequency from the user
	printf("\nEnter the frequency:\n");
	for(i=0;i<N;i++) 
	{
		printf("\nFrequnecy[%d] : ",i);
		scanf("%d",&f[i]);
	}
	
	//displaying the frequency table:
	printf("\n\nItems Frequency frequncy/Items");
	printf("\n````````````````````````````````````");
	for(i=0;i<N;i++) 
	{
		a=item[i];
		b=f[i];
		c+=f[i];
		d+=(b/a);
		printf("\n%d\t%d\t%.2f\n",item[i],f[i],(b/a));
		
	}
	printf("\n````````````````````````````````````\n");

		HM=(c/d);
	printf("\nHarmonic Mean = %.2f",HM);
}
void continuous()
{
	int X[50];
	int start,end,low1,high1;
	printf("Enter the starting number of class-interval : ");
	scanf("%d",&start);
	printf("Enter the ending number of class-interval : ");
	scanf("%d",&end);
	printf("Enter the lowest of first class-interval : ");
	scanf("%d",&low1);
	printf("Enter the highest of first class-interval : ");
	scanf("%d",&high1);
	
	int difference=(high1-low1);//finding the interval in a class-interval
	N=(end-start)/difference;//finding the total numbers of class-intervals
	printf("\nTotal number of Class-interval = %d",N);
	
	
	//assigning the frequency from the user
	printf("\nEnter the frequency:\n");
	for(i=0;i<N;i++) 
	{
		printf("\nFrequnecy[%d] : ",i);
		scanf("%d",&f[i]);
	}
	m=(high1+low1)/2;
	//displaying the frequency table:
	printf("\n\nClass-interval\tmid-point(X) Frequency frequncy/X");
	printf("\n````````````````````````````````````");
	for(i=0;i<N;i++) 
	{
	a=X[i];
		b=f[i];
		c+=f[i];
		printf("\n%d-%d\t\t%d\t%d\t%.2f\n",low1+i*difference,high1+i*difference ,i*difference+m,f[i],(b/(i*difference+m)));
		d+=(b/(i*difference+m));
	}
	printf("\n````````````````````````````````````\n");

	HM=(c/d);
	printf("\nHarmonic Mean = %.2f",HM);
}

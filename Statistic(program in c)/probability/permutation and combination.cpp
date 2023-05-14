#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int factorial(int num);
void permutation(int n,int r);
void combination(int n,int r);
int main()
{
	int choose;
	int n,r;
	printf("Menu-Driven:");
	printf("\n1. Permutation\n2. Combinatiion\n3. Exit\n");
	
	while(choose<=3)
	{
		printf("\n\nChoose for any operation: ");
		scanf("%d",&choose);
		switch(choose)
		{
			case 1: 
				permutation(n,r);
				break;
			case 2: 
				combination(n,r);
				break;
			case 3:
				exit(0);
			default:
				printf("\n!!!Errors!!!");
				break;
		}
	}
	return 0;
}
int factorial(int num)
{
	int fact = 1;
	for(int i=1;i<=num;i++)
	{
		fact *=i;
	}
	return fact;
}
void permutation(int n,int r)
{
	int diff=0;
	float permu;
	float fact_of_n=0,fact_of_diff=0;
	printf("\nCALCULAION OF PERMUTATION:");
	printf("\n```````````````````````````");
	printf("\nEnter total number of objects(n): ");
	scanf("%d",&n);
	printf("Enter number of objects taken at a time(r): ");
	scanf("%d",&r);
	fact_of_n = factorial(n);
	diff=(n-r);
	fact_of_diff = factorial(diff);
	printf("\nHere,\n\tn! = %.2f\t(n-r)! = %.2f\n",fact_of_n,fact_of_diff);
	permu = fact_of_n/fact_of_diff;
	printf("\nPermutation(n,r) = %.2f",permu);
}

void combination(int n,int r)
{
	int diff=0;
	float combin=0;
	float fact_of_n=0,fact_of_r=0,fact_of_diff=0;
	printf("\nCALCULAION OF COMBINATION:");
	printf("\n```````````````````````````");
	printf("\nEnter total number of objects(n): ");
	scanf("%d",&n);
	printf("Enter number of objects taken at a time(r): ");
	scanf("%d",&r);
	fact_of_n = factorial(n);
	fact_of_r = factorial(r);
	diff=(n-r);
	fact_of_diff = factorial(diff);
	printf("\nHere,\n\tn! = %.2f\n\tr! = %.2f\n\t(n-r)! = %.2f\n",fact_of_n,fact_of_r,fact_of_diff);
	combin = fact_of_n/(fact_of_diff*fact_of_r);
	printf("\nCombination(n,r) = %.2f",combin);
	
}

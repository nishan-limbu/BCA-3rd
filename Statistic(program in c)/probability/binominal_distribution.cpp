//program to calculate the binominal distribution
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int choose;
	float n , r,sum;
	float combination( float , float);
	long permutation( int , int);
	long double fact( int);
	
	float i,p,q=0;
	printf("\nMenu-Driven:");
	printf("\n````````````````````````````````");
	printf("\nProbabilities of :\n1. all three are defective\n2. at least two are defective\n3. at most two are defective\n4. Exit\n");
	printf("````````````````````````````````\n");
	printf("\nEnter total number of items drawn(n): ");
	scanf("%f",&n);
	
	while(choose<=4)
	{
		printf("\nChoose any opertionn to perform: ");
		scanf("%d",&choose);
		switch(choose)
		{
			case 1:
				printf("Enter number of defective items(r): ");
				scanf("%f",&r);
				printf("Enter probability of defective(p): ");
				scanf("%f",&p);
				q = 1-p;//finding the probability of failure(q)
				printf("Probability of non-defective=%.2f",q);
				printf("\nSolution,\nProbability that all items are defective =%.3f\n",(combination(n,r) * pow(p,r) * pow(q,(n-r)) ));
				printf("``````````````````````````````````````````````\n");
				break;
			case 2:
				printf("Enter number of defective items(r): ");
				scanf("%f",&r);
				printf("Enter probability of defective(p): ");
				scanf("%f",&p);
				q = 1-p;//finding the probability of failure(q)
				printf("Probability of non-defective=%.2f",q);
				for(i=r;i<=n;i++)
				{
					sum += (combination(n,i) * pow(p,i) * pow(q,(n-i)) );
				}
				printf("\nSolution,\nProbability that all items are defective =%.4f\n",sum);
				printf("``````````````````````````````````````````````\n");
				break;
			case 3:
				printf("Enter number of defective items(r): ");
				scanf("%f",&r);
				printf("Enter probability of defective(p): ");
				scanf("%f",&p);
				q = 1-p;//finding the probability of failure(q)
				printf("Probability of non-defective=%.2f",q);
				for(i=0;i<=r;i++)
				{
					sum += (combination(n,i) * pow(p,i) * pow(q,(n-i)) );
				}
				printf("\nSolution,\nProbability that all items are defective =%.4f\n",sum);
				printf("``````````````````````````````````````````````\n");
				break;
			case 4:
				exit(0);
				break;
			default:
				printf("\nInvalid Error!!!!");
				break;
		}
	}
	
	return 0;
}
long double fact( int p) 
{
	long double facts = 1;
	int i;
	for ( i = 1; i<= p; i++)
	  facts = facts * i;
	return( facts);
}
float combination ( float n, float r) 
{
	return  fact(n) / (fact(r) * fact(n-r));
}

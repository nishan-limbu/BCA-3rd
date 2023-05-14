//program showing the calculation of Poisson Distribution
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	float r;
	int choose,i;
	float e =0.368;
	float mean;
	float sum;
	int  fact( int);
	printf("\nMenu-Driven:");
	printf("\n`````````````````````````````````````````````");
	printf("\nProbabilities of :\n1. no calls come in a given 1 minute period\n2. at least 2 calls come in a given period\n3. Exit\n");
	printf("```````````````````````````````````````````````\n");
	printf("Enter the value of mean: ");
	scanf("%f",&mean);
	
	while(choose<=3)
	{
		printf("\nChoose any opertionn to perform: ");
		scanf("%d",&choose);
		printf("\n``````````````````````````````````````\n");
		switch(choose)
		{
			case 1:
				printf("\nEnter total number of calls (r): ");
				scanf("%f",&r);
				printf("\nSolution,\n\tP(r=0) = %.4f\n",(pow(e,mean)*pow(mean,r))/fact(r));
				printf("\n``````````````````````````````````````\n");
				break;
			case 2:
				printf("\nEnter total number of calls (r): ");
				scanf("%f",&r);
				for(i=0;i<r;i++)
				{
					sum += ((pow(e,mean)*pow(mean,i))/fact(i));
				}
				printf("\nSolution,\n\tP(r greater than 2) = %.4f\n",1.0-sum);
				printf("\n```````````````````````````````````````\n");
				break;
			case 3:
				exit(0);
				break;
			default:
				printf("\nInvalid Errors!!!!");
				break;
				
		}
	}
	return 0;
}

int fact( int p) {
	int  facts = 1;
	int i;
	for ( i = 1; i<= p; i++)
	  facts = facts * i;
	return( facts);
}






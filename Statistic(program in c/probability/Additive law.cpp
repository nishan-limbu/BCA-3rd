#include<stdio.h>
#include<stdlib.h>
float op1();
float op2();
int main()
{
	int choose;
	printf("Menu-Driven:");
	printf("\n`````````````````````````````````````\n");
	printf("Probability of :\n1. at least one of the two awards\n2. only one of the two awards\n3. Exit\n");
	printf("```````````````````````````````````````");
	
	while(choose<=3)
	{
		printf("\n\n\nChoose any number for operations: ");
		scanf("%d",&choose);
		switch(choose)
		{
			case 1:
				printf("\nSoultion,\n\tProbability that will get at least one of two awards = %.2f",op1());
				break;
			case 2:
				printf("\nSoultion,\n\tProbability that will get only one of two awards = %.2f",op2());
				break;
			case 3:
				exit(0);
				break;
			default:
				printf("\nInvalide Error!!!!!");
				break;
		}
	}
	return 0;
}
float op1()
{
	float A=0,B=0,both=0;
	printf("Enter the values of the following: \n");
	printf("Probability that a new airport will get award for its design, P(A) = ");
	scanf("%f",&A);
	printf("Probability that a new airport will get award for efficient, P(B) = ");
	scanf("%f",&B);
	printf("Probability that a new airport will get award for both, P(A or B) = ");
	scanf("%f",&both);
	
	return ((A+B)-both);
}

float op2()
{
	float A=0,B=0,both=0;
	printf("Enter the values of the following: \n");
	printf("Probability that a new airport will get award for its design, P(A) = ");
	scanf("%f",&A);
	printf("Probability that a new airport will get award for efficient, P(B) = ");
	scanf("%f",&B);
	printf("Probability that a new airport will get award for both, P(A or B) = ");
	scanf("%f",&both);
	
	return ((A-both)+(B-both));
}


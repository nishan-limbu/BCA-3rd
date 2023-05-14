#include<stdio.h>
#include<stdlib.h>
void Given();
float op1();
float op2();
float op3();
float op4();
float op5();
int main()
{
	int choose;
	printf("Menu-Driven:");
	printf("\n``````````````````````````````````````````````````````````\n");
	printf("Probability of :\n1. problem will be solved\n2. only one of them can solve the problem\n3. none of them will solve the problem\n4. A solves it but B and C cannot\n5. All the three students can solve the problem\n6. Exit\n");
	printf("``````````````````````````````````````````````````````````");
	
	while(choose<=6)
	{
		printf("\n\n\nChoose any number for operations: ");
		scanf("%d",&choose);
		switch(choose)
		{
			case 1:
				printf("\nSolution,\nProbability that the problem is solved = %0.2f",op1());
				break;
			case 2:
				printf("\nSolution,\nProbability that one of them can solve the problem = %0.2f",op2());
				break;
			case 3:
				printf("\nSolution,\nProbability that none of them can solve the problem = %0.2f",op3());
				break;
			case 4:
				printf("\nSolution,\nProbability that A solves it but B and C cannot = %0.2f",op4());
				break;
			case 5:
				printf("\nSolution,\nProbability that all of them can solve the problem = %0.2f",op5());
				break;
			case 6: 
				exit(0);
				break;
			default:
				printf("\nInvalid Error!!!!");
				break;
		}
	}
	return 0;
}
void Given()
{
	float A=0,B=0,C=0;
	float not_A=0,not_B=0,not_C=0;
	printf("\nEnter the values of the following:");
	printf("\nprobability that A solves a problem, P(A): ");
	scanf("%f",&A);
	printf("probability that B solves a problem, P(B): ");
	scanf("%f",&B);
	printf("probability that C solves a problem, P(C): ");
	scanf("%f",&C);
	not_A=1-A;
	not_B=1-B;
	not_C=1-C;
	printf("\nprobability that not A solves a problem, P(not_A): %.2f",not_A);
	printf("\nprobability that not B solves a problem, P(not_B): %.2f",not_B);
	printf("\nprobability that not C solves a problem, P(not_C): %.2f",not_C);
}

float op1()
{
	float result1=0;
	float A=0,B=0,C=0;
	float not_A=0,not_B=0,not_C=0;
	
	Given();//function call
	result1=(1-(not_A*not_B*not_C));
	return result1;
}
float op2()
{
	float A=0,B=0,C=0;
	float result2=0;
	float not_A=0,not_B=0,not_C=0;
	printf("\nEnter the values of the following:");
	printf("\nprobability that A solves a problem, P(A): ");
	scanf("%f",&A);
	printf("probability that B solves a problem, P(B): ");
	scanf("%f",&B);
	printf("probability that C solves a problem, P(C): ");
	scanf("%f",&C);
	not_A=1-A;
	not_B=1-B;
	not_C=1-C;
	printf("\nprobability that not A solves a problem, P(not_A): %.2f",not_A);
	printf("\nprobability that not B solves a problem, P(not_B): %.2f",not_B);
	printf("\nprobability that not C solves a problem, P(not_C): %.2f",not_C);	
	
	result2=((A*not_B*not_C)+(not_A*B*not_C)+(not_A*not_B*C));
	return result2;	
}
float op3()
{
	float A=0,B=0,C=0;
	float result3=0;
	float not_A=0,not_B=0,not_C=0;
	printf("\nEnter the values of the following:");
	printf("\nprobability that A solves a problem, P(A): ");
	scanf("%f",&A);
	printf("probability that B solves a problem, P(B): ");
	scanf("%f",&B);
	printf("probability that C solves a problem, P(C): ");
	scanf("%f",&C);
	not_A=1-A;
	not_B=1-B;
	not_C=1-C;
	printf("\nprobability that not A solves a problem, P(not_A): %.2f",not_A);
	printf("\nprobability that not B solves a problem, P(not_B): %.2f",not_B);
	printf("\nprobability that not C solves a problem, P(not_C): %.2f",not_C);	
	
	result3=(not_A*not_B*not_C);
	return result3;	
}
float op4()
{
	float A=0,B=0,C=0;
	float result4=0;
	float not_A=0,not_B=0,not_C=0;
	printf("\nEnter the values of the following:");
	printf("\nprobability that A solves a problem, P(A): ");
	scanf("%f",&A);
	printf("probability that B solves a problem, P(B): ");
	scanf("%f",&B);
	printf("probability that C solves a problem, P(C): ");
	scanf("%f",&C);
	not_A=1-A;
	not_B=1-B;
	not_C=1-C;
	printf("\nprobability that not A solves a problem, P(not_A): %.2f",not_A);
	printf("\nprobability that not B solves a problem, P(not_B): %.2f",not_B);
	printf("\nprobability that not C solves a problem, P(not_C): %.2f",not_C);	
	
	result4=(A*not_B*not_C);
	return result4;	
}
float op5()
{
	float A=0,B=0,C=0;
	float result5=0;
	float not_A=0,not_B=0,not_C=0;
	printf("\nEnter the values of the following:");
	printf("\nprobability that A solves a problem, P(A): ");
	scanf("%f",&A);
	printf("probability that B solves a problem, P(B): ");
	scanf("%f",&B);
	printf("probability that C solves a problem, P(C): ");
	scanf("%f",&C);
	not_A=1-A;
	not_B=1-B;
	not_C=1-C;
	printf("\nprobability that not A solves a problem, P(not_A): %.2f",not_A);
	printf("\nprobability that not B solves a problem, P(not_B): %.2f",not_B);
	printf("\nprobability that not C solves a problem, P(not_C): %.2f",not_C);	
	
	result5=(A*B*C);
	return result5;	
}

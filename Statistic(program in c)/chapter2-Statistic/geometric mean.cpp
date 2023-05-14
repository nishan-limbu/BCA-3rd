//program to claculate geometric Mean;
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void individual();
//void discrete();
//void continuous();
int main()
{
	int choose;
	printf("Menu-Driven:");
	printf("\n`````````````````````````");
	printf("\n1. Individual Series\n2. Discrete Series\n3. Continuous Series\n4. Exit");
	printf("\n`````````````````````````");
	while(1)
	{
		printf("\nChoose any numbers: ");
		scanf("%d",&choose);
		switch(choose)
		{
			case 1:
				individual();
				break;
//			case 2:
//				discrete();
//				break;
//			case 3:
//				continuous();
//				break;
			case 4:
				exit(0);
				break;
			default:
				printf("\nInvalid Errors!!!");
				break;
		}
	}
	return 0;
}
void individual()
{
	int N,i;
	float a,b,GM;
	int item[50];
	printf("Enter total number of items : ");
	scanf("%d",&N);
	printf("\nEnter the items: \n");
	for(i=0;i<N;i++)
	{
		printf("Item [%d] : ",i);
		scanf("%d",&item[i]);
	}
	//printing the table:

	printf("\nitems\t\t log(X)\n");
	for(i=0;i<N;i++)
	{
		printf("%d\t\t%.2f\n",item[i],log(item[i]));
		b+=log(item[i]);
	}
	a=(b/N);
	GM=pow(10,a);
	printf("\n Geometric Mean = %.2f",GM);
}

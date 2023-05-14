#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
main() 
{
	int n , r, combination( int , int);
	int choose;
	long permutation( int , int);
	long double fact( int);
	printf("Menu-Driven:");
	printf("\n````````````````````````");
	printf("\n1. Permutation\n2. Combinatiion\n3. Exit\n");
	printf("````````````````````````\n");

	printf(" Enter value of n: ");
	scanf("%d",&n);
	printf(" Enter value of r: ");
	scanf("%d",&r);	
	printf("\n````````````````````````\n");

	while(choose<=3)
	{
		printf("\nChoose for any operation: ");
		scanf("%d",&choose);
		printf("\n````````````````````````\n");

		switch(choose)
		{
			case 1: 
				printf( " %dP%d is %d\n", n,r,permutation( n, r));
				break;
			case 2: 
				printf(" %dC%d  is %ld", n,r,combination( n , r));
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
long double fact( int p) {
	long double facts = 1;
	int i;
	for ( i = 1; i<= p; i++)
	  facts = facts * i;
	return( facts);
}
int combination ( int n, int r) {
	return( fact( n) / (fact( r) * fact(n- r) ) ) ;
}
long permutation( int n , int r) {
	return( fact( n) / fact( n- r));
}

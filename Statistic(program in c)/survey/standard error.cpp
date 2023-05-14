#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	float smean[50];
	long double fact( int);
	int N,r,n,i,combination( int , int);
	float sum=0,mean_of_standardMean=0,StandardError=0,result=0;
	printf("Enter population size,(N): ");
	scanf("%d",&N);
	printf("Enter sample size: ");
	scanf("%d",&r);
	n=combination(N,r);
	printf("%.2f",&n);
	printf("Enter sample mean:\n ");
	for(i=0;i<n;i++)
	{
		printf("Standard_Mean[%d]= ",i);
		scanf("%f",&smean[i]);
	}
	for(i=0;i<n;i++)
	{
		sum+=smean[i];
	}
	mean_of_standardMean=sum/n;
	printf("\nTable:\nSample Mean\t(Sample Mean - mean_of_standardMean)\t(Sample Mean - mean_of_standardMean)^2\n");
	printf("``````````````````````````````````````````````````````````````````````````````````````````````\n");
	for(i=0;i<n;i++)
	{
		printf("%.2f\10t\t\t\t\t%.2f\t\t\t\t\t%.2f\n",smean[i],(smean[i] - mean_of_standardMean),((smean[i] - mean_of_standardMean)*(smean[i] - mean_of_standardMean)));
		result+=((smean[i] - mean_of_standardMean)*(smean[i] - mean_of_standardMean));
	}
	printf("``````````````````````````````````````````````````````````````````````````````````````````````\n");

	StandardError= sqrt(result/n);
	printf("\nTherefore, Standard Error is %.2f",StandardError);
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

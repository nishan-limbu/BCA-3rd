//program to calculate the following:
/*
1. Standard Deviation
2.Coefficient of Standard Deviation
*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int f[50],item[50];
int start,end,low1,high1;
int i,count=0,a=0,m;
int total_num,difference;
float b=0,c=0,d=0,Mean,Standard_deviation,CV;
void Standard_individual();
void Standard_discrete();
void Standard_continuous();
int main()
{
	int choose;
	printf("Menu-Driven:");
	printf("\n````````````````````````````````````````````");
	printf("\n1.Standard Deviation in individual series\n2.Standard Deviation in Discrete Series\n3.Standard Deviation in Continuous Series\n4. Exit");
	printf("\n````````````````````````````````````````````");
	
	while(1)
	{
		printf("\nchoose any option: ");
		scanf("%d",&choose);
		switch(choose)
		{
			case 1:
				Standard_individual();
				break;
			case 2:
				Standard_discrete();
				break;
			case 3:
				Standard_continuous();
				break;
			case 4:
				exit(0);
				break;
			default:
				printf("\nInvalid Errors......");
				break;
		}
	}
	
	
		return 0;
}
void Standard_individual()
{
	//assigning the values from the users
	printf("\nEnter total number of items : ");
	scanf("%d",&total_num);
	
	//assigning the items from the user
	printf("\nEnter the items: \n");
	for(i=0;i<total_num;i++)
	{
		printf("Item(%d) : ",i);
		scanf("%d",&item[i]);	
	}
	
	//assigning one value from user
	int A;
	printf("\nEnter the number that you want to assume from items : ");
	scanf("%d",&A);
	printf("\nThe frequency is shown below:\n");
	printf("\nItems(X)\t(X-A)\t\t(X-A)^2");
	printf("\n```````````````````````````````````````````````````\n");
	for(i=0;i<total_num;i++)
	{
		printf("%d\t\t%d\t\t%d\n",item[i],(item[i]-A),((item[i]-A)*(item[i]-A)));
	}
	printf("\n```````````````````````````````````````````````````\n");
	for(i=0;i<total_num;i++)
	{
		a+=(item[i]-A);
		b+=((item[i]-A)*(item[i]-A));
		c+=item[i];
	}
	//calculating Mean:
	Mean=c/total_num;
	//calculating standard deviation
	Standard_deviation=sqrt((b/total_num)-((a/total_num)*(a/total_num)));
	//printing the mean and standard deviation:
	printf("\nMean = %.2f",Mean);
	printf("\nStandard Deviation = %.2f",Standard_deviation);
	
	//calculating coefficient of varience:
	CV=(Standard_deviation/Mean)*100;
	printf("\nCoefficient of Varience (CV) = %.2f",CV);
}
void Standard_discrete()
{
	//assigning the values from the users
	printf("\nEnter total number of items : ");
	scanf("%d",&total_num);
	
	//assigning the items from the user
	printf("\nEnter the items: \n");
	for(i=0;i<total_num;i++)
	{
		printf("Item(%d) : ",i);
		scanf("%d",&item[i]);	
	}
	//assigning the frequency from the user
	printf("\nEnter the frequency: \n");
	for(i=0;i<total_num;i++)
	{
		printf("Frequency(%d) : ",i);
		scanf("%d",&f[i]);	
	}
	
	for(i=0;i<total_num;i++)//finding total number and sum of (fxm)
	{
		b+=f[i];
		c+=(f[i]*item[i]);
	}
	printf("\nTotal Number(N) : %.2f",b);
	printf("\nTotal Sum (f X mid) : %.2f",c);
	Mean=c/b;
	printf("\nMean = %.2f",(c/b));
	//showing frequency table:
	printf("\nItems (X)\tfrequency (f)\tfxX\tfx(X-Mean)^2\n");
	printf("\n```````````````````````````````````````````````````````````````````````````````````\n");
	
	for(i=0;i<total_num;i++)
	{
		a+=f[i];
			printf("%d\t%d\t\t%d\t\t%.1f\n",item[i],f[i],f[i]*item[i],f[i]*((item[i]-Mean)*(item[i]-Mean)));
	}
	printf("\n```````````````````````````````````````````````````````````````````````````````````");
	for(i=0;i<total_num;i++)
	{
		d+=(f[i]*((item[i]-Mean)*(item[i]-Mean)));
	}
	printf("\nSum of fx(midpoint-Mean)^2 = %.2f",d);
	Standard_deviation=sqrt(d/b);
	printf("\nStandard Deviation = %.2f",Standard_deviation);
	CV=(Standard_deviation/Mean)*100;
	printf("\nCoefficient of Variation(CV) = %.2f",CV);
}
void Standard_continuous()
{
	
	//assigning the values from the users
	printf("\n\nEnter the starting number of class-interval : ");
	scanf("%d",&start);
	printf("Enter the ending number of class-interval : ");
	scanf("%d",&end);
	printf("Enter the lowest of first class-interval : ");
	scanf("%d",&low1);
	printf("Enter the highest of first class-interval : ");
	scanf("%d",&high1);
	
	difference=(high1-low1);//finding the interval in a class-interval
	
	total_num=(end-start)/difference;//finding the total numbers of class-intervals
	printf("\nTotal number of Class-interval = %d",total_num);
	
	//assigning the frequency from the user
	printf("\n\nEnter the frequency: \n");
	for(i=0;i<total_num;i++)
	{
		printf("Frequency(%d) : ",i);
		scanf("%d",&f[i]);	
	}
	//finding mid-point(m):
	m=(high1+low1)/2;
	for(i=0;i<total_num;i++)//finding total number and sum of (fxm)
	{
		b+=f[i];
		c+=(f[i]*(i*difference+m));
	}
	printf("\nTotal Number(N) : %.2f",b);
	printf("\nTotal Sum (f X mid) : %.2f",c);
	Mean=c/b;
	printf("\nMean = %.2f",(c/b));
	//showing frequency table:
	printf("\nclass-interval(X)\tmid-point(m)\tfrequency(f)\tfxm\tfx(m-Mean)^2\n");
	printf("\n```````````````````````````````````````````````````````````````````````````````````\n");
	
	for(i=0;i<total_num;i++)
	{
		a+=f[i];
			printf("%d-%d\t\t\t%d\t\t%d\t\t%d\t\t%.1f\n",low1+i*difference,high1+i*difference ,i*difference+m,f[i],f[i]*(i*difference+m),f[i]*(((i*difference+m)-Mean)*((i*difference+m)-Mean)));
	}
	printf("\n```````````````````````````````````````````````````````````````````````````````````");
	for(i=0;i<total_num;i++)
	{
		d+=(f[i]*(((i*difference+m)-Mean)*((i*difference+m)-Mean)));
	}
	printf("\nSum of fx(midpoint-Mean)^2 = %.2f",d);
	Standard_deviation=sqrt(d/b);
	printf("\nStandard Deviation = %.2f",Standard_deviation);
	CV=(Standard_deviation/Mean)*100;
	printf("\nCoefficient of Variation(CV) = %.2f",CV);
}


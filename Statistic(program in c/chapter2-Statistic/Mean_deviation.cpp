//program to calculate the Mean Deviation of individual, discrete and continuous.
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int f[50],item[50];	
int start,end,low1,high1;
int i,count=0,a=0,m;
int total_num,difference;
float b=0,c=0,d=0,Mean,Mean_deviation;
void Mean_individual();
void Mean_discrete();
void Mean_continuous();
int main()
{
	int choose;
	printf("Menu-Driven:");
	printf("\n````````````");
	printf("\n1. Mean Deviation in Individual Series\n2. Mean Deviation in Discrete series\n3. Mean Deviation in Continuous Series\n4. Exit");
	printf("\n````````````");
	
	while(1)
	{
		printf("\nChoose any number from above: ");
		scanf("%d",&choose);
		switch(choose)
		{
			case 1:
				Mean_individual();
				break;
			case 2:
				Mean_discrete();
				break;
			case 3:
				Mean_continuous();
				break;
			case 4:
				exit(0);
				break;
			default:
				printf("\nInvalid Error.....");
				break;
		}
	}
	
	return 0;
}
void Mean_individual()
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
	//calculating Mean:
	for(i=0;i<total_num;i++)
	{
		c+=item[i];
	}
	//calculating Mean:
	Mean=c/total_num;
	printf("\nMean = %.2f\n",Mean);
	printf("\nThe frequency is shown below:");
	printf("\nItems(X)\t\t(X-Mean)");
	printf("\n````````````````````````````````````\n");
	for(i=0;i<total_num;i++)
	{
		printf("%d\t\t\t%.2f\n",item[i],sqrt((item[i]-Mean)*(item[i]-Mean)));
	}
	printf("\n````````````````````````````````````\n");
	for(i=0;i<total_num;i++)
	{
		a+=(sqrt((item[i]-Mean)*(item[i]-Mean)));
		
	}
	b=total_num;
	printf("\nb=%.2f",b);
	Mean_deviation=a/b;
	printf("\nMean Deviation = %.2f",Mean_deviation);
		
}

void Mean_discrete()
{
	//assigning the values from the users
	printf("\nEnter total items : ");
	scanf("%d",&total_num);
	
	//assigning the items from the user
	printf("\n\nEnter the items: \n");
	for(i=0;i<total_num;i++)
	{
		printf("Item(%d) : ",i);
		scanf("%d",&item[i]);	
	}
	//assigning the frequency from the user
	printf("\n\nEnter the frequency: \n");
	for(i=0;i<total_num;i++)
	{
		printf("Frequency(%d) : ",i);
		scanf("%d",&f[i]);	
	}
	
	for(i=0;i<total_num;i++)//finding total number and sum of (fxX)
	{
		b+=f[i];
		c+=(f[i]*item[i]);
	}
	printf("\nTotal Number(N) : %.2f",b);
	printf("\nTotal Sum (f x X) : %.2f",c);
	Mean=c/b;
	printf("\nMean = %.2f",(c/b));
	//showing frequency table:
	printf("\nItems (X)\tfrequency (f)\tfxm\tfx|m-Mean|\n");
	printf("\n```````````````````````````````````````````````````````````````````````````````````\n");
	
	for(i=0;i<total_num;i++)
	{
		a+=f[i];
		printf("%d\t\t%d\t\t%d\t\t%.1f\n",item[i],f[i],f[i]*item[i],f[i]*((sqrt((item[i]-Mean)*(item[i]-Mean)))));
	}
	printf("\n```````````````````````````````````````````````````````````````````````````````````");
	for(i=0;i<total_num;i++)
	{
		d+=(f[i]*(i*difference+m),f[i]*((sqrt(((i*difference+m)-Mean)*((i*difference+m)-Mean)))));
	}
	Mean_deviation=d/b;
	printf("\nMean Deviation = %.2f",Mean_deviation);
}
void Mean_continuous()
{
	
	//assigning the values from the users
	printf("Enter the starting number of class-interval : ");
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
	printf("\nclass-interval(X)\tmid-point(m)\tfrequency(f)\tfxm\tfx|m-Mean|\n");
	printf("\n```````````````````````````````````````````````````````````````````````````````````\n");
	
	for(i=0;i<total_num;i++)
	{
		a+=f[i];
		printf("%d-%d\t\t\t%d\t\t%d\t\t%d\t\t%.1f\n",low1+i*difference,high1+i*difference ,i*difference+m,f[i],f[i]*(i*difference+m),f[i]*((sqrt(((i*difference+m)-Mean)*((i*difference+m)-Mean)))));
	}
	printf("\n```````````````````````````````````````````````````````````````````````````````````");
	for(i=0;i<total_num;i++)
	{
		d+=(f[i]*(i*difference+m),f[i]*((sqrt(((i*difference+m)-Mean)*((i*difference+m)-Mean)))));
	}
	Mean_deviation=d/b;
	printf("\nMean Deviation = %.2f",Mean_deviation);
	
}


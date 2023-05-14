//program to calculate different Measure of centeral tendency of Discrete seeries. They are:
//1. Mean
//2. Median
//3. Mode
//4. Quartile Deviation

#include<stdio.h>
#include<stdlib.h>
int item_num,i,item[50],freq[50],cf[50],c=0,sum=0,fre;
int a,b,d,e,f,g,h,max,f0,f1,f2;
float Mean,Median_term,QD;
float Q1,Q2,Q3;
void mean();
void median();
void mode();
void Quartile();
int main()
{
	int choose;
	printf("Menu-Driven:");
	printf("\n```````````````````````");
	printf("\n1. Mean\n2. Median\n3. Mode\n4.Quartile Deviation\n5. Exit");
	printf("\n```````````````````````\n");
	
	while(1)
	{
		printf("\nChoose any number : ");
		scanf("%d",&choose);
		
		switch(choose)
		{
			case 1:
				mean();
				break;
			case 2:
				median();
				break;
			case 3:
				mode();
				break;
			case 4:
				Quartile();
				break;
			case 5:
				exit(0);
				break;
			default:
				printf("\nInvalid Errors.....\n");
				break;
		}
	}

	return 0;
}
void mean()
{
	//assigning total number of items from users
	printf("Enter the total number of items : ");
	scanf("%d",&item_num);
	//assigning items from users
	printf("\nEnter the items: \n");
	for(i=0;i<item_num;i++)
	{
		scanf("%d",&item[i]);	
	}
	//assigning frequency from user.
	printf("Enter the corressponging frequency of items : \n");
	for(i=0;i<item_num;i++)
	{
		scanf("%d",&freq[i]);	
	}
	//displaying the frequency table :
	
	printf("\nX\t\t   Frequency(f)\t\t\tf*X\n");
	printf("........................................................\n");
	for(i=0;i<item_num;i++)
	{
				
		printf("%d\t\t\t%d\t\t\t%d\n",item[i],freq[i],(item[i]*freq[i]));
	}
	printf("\n......................................................\n\n");
	//calculating mean
	printf("For Mean:\n");
	printf("\n```````````");
	for(i=0;i<item_num;i++)
	{
		sum+=(item[i]*freq[i]);
	}
	for(i=0;i<item_num;i++)
	{
		fre+=freq[i];
	}
	float N=fre;
	printf("\nTotal sum = %d",sum);
	printf("\nTotal Number = %.2f",N);
	Mean=sum/N;
	printf("\nMean = %.2f",Mean);
}

void median()
{
	//assigning total number of items from users
	printf("Enter the total number of items : ");
	scanf("%d",&item_num);
	//assigning items from users
	printf("\nEnter the items: \n");
	for(i=0;i<item_num;i++)
	{
		scanf("%d",&item[i]);	
	}
	//assigning frequency from user.
	printf("Enter the corressponging frequency of items : \n");
	for(i=0;i<item_num;i++)
	{
		scanf("%d",&freq[i]);	
	}
	float N=fre;
	printf("\nTotal Number = %.2f",N);
	//calculating Median
	printf("\n\nFor Median:");
	printf("\n````````````");
		//displaying the frequency table  including cumulative frequency:
	printf("\nX\t\t   Frequency(f)\t\t\tf*X\t\tCumulative frequency(C.F)\n");
	printf("..................................................................................................\n");
	for(i=0;i<item_num;i++)
	{
		printf("%d\t\t\t%d\t\t\t%d\t\t\t%d\n",item[i],freq[i],(item[i]*freq[i]),cf[i]);
	}
	printf("\n................................................................................................\n\n");

	Median_term=(N+1)/2.00;
	printf("\nMedian term = Value of (%.2f)th item",Median_term);
	max=freq[0];
	for(i=0;i<item_num;i++)
	{
		if(cf[i]<=(Median_term))
		{
			a=cf[i+1];
			b=item[i+1];
		}	
	}
	printf("\nIn C.F, the cf just greater than %.2f is %d",Median_term,a);
	printf("\nMedian = %d\n",b);
}

void mode()
{
	//assigning total number of items from users
	printf("Enter the total number of items : ");
	scanf("%d",&item_num);
	//assigning items from users
	printf("\nEnter the items: \n");
	for(i=0;i<item_num;i++)
	{
		scanf("%d",&item[i]);	
	}
	//assigning frequency from user.
	printf("Enter the corressponging frequency of items : \n");
	for(i=0;i<item_num;i++)
	{
		scanf("%d",&freq[i]);	
	}
	//displaying the frequency table :
	
	printf("\nX\t\t   Frequency(f)\n");
	printf("........................................................\n");
	for(i=0;i<item_num;i++)
	{		
		printf("%d\t\t\t%d\n",item[i],freq[i]);
	}
	printf("\n......................................................\n\n");
	
	
	//calculating Mode:
	printf("\nFor Mode:");
	printf("\n``````````");
	for(i=0;i<item_num;i++)
	{
		if(freq[i]>max)
		{
			max=freq[i];
			f0=freq[i-1];
			f2=freq[i+1];
			d=item[i];
		}	
	}
	f1=max;
	printf("\nf0 = %d\nf1=%d\nf2=%d",f0,f1,f2);
	printf("\nIn frequency table, %d is the maximum frequency.\nSo its corresponding items is %d.",f1,d);
	printf("\nMode = %d",d);
}

void Quartile()
{
	//assigning total number of items from users
	printf("Enter the total number of items : ");
	scanf("%d",&item_num);
	//assigning items from users
	printf("\nEnter the items: \n");
	for(i=0;i<item_num;i++)
	{
		scanf("%d",&item[i]);	
	}
	//assigning frequency from user.
	printf("Enter the corressponging frequency of items : \n");
	for(i=0;i<item_num;i++)
	{
		scanf("%d",&freq[i]);	
	}
	//displaying the frequency table :
	
	printf("\nX\t\t   Frequency(f)\t\t\tf*X\n");
	printf("........................................................\n");
	for(i=0;i<item_num;i++)
	{
		c+=freq[i];
		cf[i]=c;		
		printf("%d\t\t\t%d\t\t\t%d\n",item[i],freq[i],(item[i]*freq[i]),cf[i]);
	}
	printf("\n......................................................\n\n");
	//calculating mean
	printf("For Mean:\n");
	printf("\n```````````");
	for(i=0;i<item_num;i++)
	{
		sum+=(item[i]*freq[i]);
	}
	for(i=0;i<item_num;i++)
	{
		fre+=freq[i];
	}
	float N=fre;
	
	printf("\nTotal Number = %.2f",N);
	
		//displaying the frequency table  including cumulative frequency:
	printf("\nX\t\t   Frequency(f)\t\t\tf*X\t\tCumulative frequency(C.F)\n");
	printf("..................................................................................................\n");
	for(i=0;i<item_num;i++)
	{
		printf("%d\t\t\t%d\t\t\t%d\t\t\t%d\n",item[i],freq[i],(item[i]*freq[i]),cf[i]);
	}
	printf("\n................................................................................................\n\n");
	
	//calculating Quartile Deviation (Q.D)
	printf("\n\nFor Quartile deviation: ");
	printf("\n``````````````````````````");
	//calculating Q1:
	printf("\nFor Q1:");
	Q1=(N+1)/4.00;
	for(i=0;i<item_num;i++)
	{
		if(cf[i]<=Q1)
		{
			e=cf[i+1];
			f=item[i+1];
		}
	}
	printf("\nIn CF, the cf just greater than %.2f is %d.",Q1,e);
	printf("\nQ1 term = %d",e);
	printf("\nQ1 = %d",f);
	 
	 //calculating Q3:
	printf("\nFor Q3:");
	Q3=(3*((N+1)))/4.00;
	for(i=0;i<item_num;i++)
	{
		if(cf[i]<=Q3)
		{
			g=cf[i+1];
			h=item[i+1];
		}
	}
	printf("\nIn CF, the cf just greater than %.2f is %d.",Q3,g);
	printf("\nQ3 term = %d",g);
	printf("\nQ3 = %d",h);
	
	QD=(h-f)/2.00;
	printf("\n\nQuartile Deviation (Q.D) = %.2f",QD);
}


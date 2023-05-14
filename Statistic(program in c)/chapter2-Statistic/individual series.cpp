//program to calculate different Measure of centeral tendency of Indiviual seeries. They are:
//1. Mean
//2. Median
//3. Mode
//4. Quartile Deviation

#include<stdio.h>
#include<stdlib.h>
int N,item[50],freq[50],sum=0,i,j,temp=0;
float num=N,Mean,Median_term;
float Q1,Q3,QD;
int a,c,d,f;
float b,e,x,y;
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
	//assigning items from users
	printf("Enter the total number of items: ");
	scanf("%d",&N);
	//assigning items from users
	for(i=0;i<N;i++)
	{
		scanf("%d",&item[i]);
	}
	//arranging in ascending order
	for(i=0;i<N;i++)
	{
		for(j=i+1;j<N;j++)
		{
			if(item[i]>item[j])
			{
				temp=item[i];
				item[i]=item[j];
				item[j]=temp;
			}
		}
	}
	printf("\nArranging in ascending order:\n");
	//printing the items in ascending order
	for(i=0;i<N;i++)
	{
		printf("%d ",item[i]);
	}
	//calculating sum of all the items
	for(i=0;i<N;i++)
	{
		sum +=item[i];
	}
	printf("\n\nFor Mean :");
	printf("\n````````````");
	printf("\nTotal sum of all items = %d",sum);

	//calculating mean
	Mean=(sum/N);
	printf("\nMean = %.2f",Mean);
}
void median()
{
	//assigning items from users
	printf("Enter the total number of items: ");
	scanf("%d",&N);
	//assigning items from users
	for(i=0;i<N;i++)
	{
		scanf("%d",&item[i]);
	}
	//arranging in ascending order
	for(i=0;i<N;i++)
	{
		for(j=i+1;j<N;j++)
		{
			if(item[i]>item[j])
			{
				temp=item[i];
				item[i]=item[j];
				item[j]=temp;
			}
		}
	}
	printf("\nArranging in ascending order:\n");
	//printing the items in ascending order
	for(i=0;i<N;i++)
	{
		printf("%d ",item[i]);
	}
	
	//calculating sum of all the items
	for(i=0;i<N;i++)
	{
		sum +=item[i];
	}
	
	
	//calculating median
	printf("\n\nFor Median:");
	printf("\n``````````````");
	Median_term=(N+1)/2.00;
	printf("\nMedian term = Value of (%.2f)th item",Median_term);
	//finding the actual median from the ascending order.
	for(i=0;i<N;i++)
	{
		if(i==(Median_term-1))
		{
			printf("\nMedian = %d",item[i]);
		}
		else if((i>(Median_term-1)&&(i<Median_term)))
		{
			printf("\nMedian = %d",item[i]);
		}
	}
	
}
void mode()
{
	int j;
	int count=0;
	//assigning items from users
	printf("Enter the total number of items: ");
	scanf("%d",&N);
	//assigning items from users
	for(i=0;i<N;i++)
	{
		scanf("%d",&item[i]);
	}
	//arranging in ascending order
	for(i=0;i<N;i++)
	{
		
		for(j=i+1;j<N;j++)
		{
			if(item[i]>item[j])
			{
				temp=item[i];
				item[i]=item[j];
				item[j]=temp;
			}
		}
	}
	printf("\nArranging in ascending order:\n");
	//printing the items in ascending order
	for(i=0;i<N;i++)
	{
		printf("%d ",item[i]);
		freq[i]=-1;
	}
	for(i=0;i<N;i++)
	{
		count=1;
		for(j=i+1;j<N;j++)
		{
			if(item[i]==item[j])
			{
				count++;
				freq[j]=0;
			}
			if(freq[i]!=0)
			{
				freq[i]=count;
			}
		}
	}
	//printing the repetition of the items.
	for(i=0;i<N;i++)
	{
		if(freq[i]!=0)
		{
			printf("\n%d occurs %d times.\n",item[i],freq[1]);
		}
	}
	printf("\n");
}
void Quartile()
{
	//assigning items from users
	printf("Enter the total number of items: ");
	scanf("%d",&N);
	//assigning items from users
	for(i=0;i<N;i++)
	{
		scanf("%d",&item[i]);
	}
	//arranging in ascending order
	for(i=0;i<N;i++)
	{
		for(j=i+1;j<N;j++)
		{
			if(item[i]>item[j])
			{
				temp=item[i];
				item[i]=item[j];
				item[j]=temp;
			}
		}
	}
	printf("\nArranging in ascending order:\n");
	//printing the items in ascending order
	for(i=0;i<N;i++)
	{
		printf("%d ",item[i]);
	}
	//calculating sum of all the items
	for(i=0;i<N;i++)
	{
		sum +=item[i];
	}
	printf("\nTotal sum of all items = %d",sum);
	
		
	//Calculating Quartile Deviation(Q.D) from individual series
	printf("\n\nFor Quartile Deviation (Q.D) :");
	printf("\n```````````````````````````````");
	Q1=(N+1)/4.00;
	printf("\nQ1 term = Value of (%.2f)th item",Q1);
	//finding the actual Q1 from the ascending order.
	printf("\nFor Q1:");
	a=Q1;
	printf("\nz=%d",a);
	b=Q1-a;
	printf("\nvalue=%.2f",b);
	
	for(i=0;i<N;i++)
	{
		if((i>=(Q1-1)&&(i<Q1)))
		{
			c=(item[i]-item[i-1]);
			printf("\nc = %d",c);
			x=item[i-1]+(b*c);
			printf("\nQ1= %.2f",x);
			
		}
	}
		printf("\nFor Q3:");
	Q3=(3*(N+1))/4.00;
	printf("\nQ3 term = Value of (%.2f)th item",Q3);
	//finding the actual Q3 from the ascending order.
	d=Q3;
	printf("\nd=%d",d);
	e=Q3-d;
	printf("\nvalue=%.2f",e);
	for(i=0;i<N;i++)
	{
		if((i>=(Q3-1)&&(i<Q3)))
		{
			f=(item[i]-item[i-1]);
			printf("\nf=%d",f);
			y=item[i-1]+(e*f);
			printf("\nQ3 = %.2f",y);
			
		}
	}
	QD=(y-x)/2.00;
	printf("\n\nQuartile Deviation (Q.D) = %.2f",QD);
}

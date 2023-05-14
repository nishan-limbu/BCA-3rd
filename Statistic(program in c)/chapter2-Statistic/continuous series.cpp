//program to calculate different Measure of centeral tendency of continuous seeries. They are:
//1. Mean
//2. Median
//3. Mode
//4. Quartile Deviation

#include<stdio.h>
#include<stdlib.h>
int f[50],cf[50];
int start,end,low1,high1;
int i,count=0,a=0,m;
int difference,total_num;
float d,e,g,cl,ch;
float b=0,c=0,Mean,Median,Mode,Q1,Q3,QD;

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
	//showing frequency table:
	printf("\nclass-interval(X)\tmid-point(m)\tfrequency(f)\tf*m\n");
	printf("\n```````````````````````````````````````````````````````````````````````````````````\n");
	for(i=0;i<total_num;i++)
	{
		a+=f[i];
			printf("%d-%d\t\t\t%d\t\t%d\t\t%d\n",low1+i*difference,high1+i*difference ,i*difference+m,f[i],f[i]*(i*difference+m));
	}
	printf("\n```````````````````````````````````````````````````````````````````````````````````");
	for(i=0;i<total_num;i++)
	{
		b+=f[i];
		c+=(f[i]*(i*difference+m));
	}
	printf("\nTotal Number(N) : %.2f",b);
	printf("\nTotal Sum (f X mid) : %.2f",c);
	
	//calculating mean:
	printf("\nFor Mean:");
	printf("\n````````");
	printf("\nMean = %.2f",(c/b));
}

void median()
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
	//showing frequency table:
	printf("\nclass-interval(X)\tmid-point(m)\tfrequency(f)\tf*m\tcumulative frequency(c.f)\n");
	printf("\n```````````````````````````````````````````````````````````````````````````````````\n");
	for(i=0;i<total_num;i++)
	{
		a+=f[i];
		cf[i]=a;
			printf("%d-%d\t\t\t%d\t\t%d\t\t%d\t\t%d\n",low1+i*difference,high1+i*difference ,i*difference+m,f[i],f[i]*(i*difference+m),cf[i]);
	}
	printf("\n```````````````````````````````````````````````````````````````````````````````````");
	for(i=0;i<total_num;i++)
	{
		b+=f[i];
		c+=(f[i]*(i*difference+m));
	}
	printf("\nTotal Number(N) : %.2f",b);
	
	
	//calculating Median:
	printf("\n\nFor Median:");
	printf("\n`````````````");
	printf("\n Median term =%.2f",(b/2.00));
	for(i=0;i<total_num;i++)
	{
		if(cf[i]<=(b/2.00))
		{
			d=cf[i+1];
			e=f[i+1];
			g=cf[i];
			cl=low1+(i+1)*difference;//class low
			ch=high1+(i+1)*difference;//class high
		}
	}
	printf("\nIn C.F, the cf just greater than %.2f is %.2f.\nSo, its corresponding class-interval is (%.1f - %.1f)",(b/2.00),d,cl,ch);
	Median=cl+(((b/2.00)-g)*difference)/e;
	printf("\nMedian = %.2f",Median);	
}

void mode()
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
	//showing frequency table:
	printf("\nclass-interval(X)\tmid-point(m)\tfrequency(f)\n");
	printf("\n```````````````````````````````````````````````````````````````````````````````````\n");
	for(i=0;i<total_num;i++)
	{
		a+=f[i];
		cf[i]=a;
			printf("%d-%d\t\t\t%d\t\t%d\n",low1+i*difference,high1+i*difference ,i*difference+m,f[i]);
	}
	printf("\n```````````````````````````````````````````````````````````````````````````````````");
	
	
	//calculating Mode:
	printf("\n\nFor Mode:");
	printf("\n```````````");
	float max,f0,f1,f2;
	float cl1,ch1;
	max=f[0];
	for(i=0;i<total_num;i++)
	{
		if(f[i]>max)
		{
			max=f[i];
			f0=f[i-1];
			f2=f[i+1];
			cl1=low1+(i)*difference;//class low-1
			ch1=high1+(i)*difference;//class high-1
		}
	}
	f1=max;
	printf("\nf0 = %.1f\nf1=%.1f\nf2=%.1f",f0,f1,f2);
	printf("\nclass interval= (%.1f-%.1f)",cl1,ch1);
	Mode=cl1+(difference*(f1-f0))/(2*f1-f0-f2);
	printf("\nMode = %.2f",Mode);	

}

void Quartile()
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
	//showing frequency table:
	printf("\nclass-interval(X)\tmid-point(m)\tfrequency(f)\tf*m\tcumulative frequency(c.f)\n");
	printf("\n```````````````````````````````````````````````````````````````````````````````````\n");
	for(i=0;i<total_num;i++)
	{
		a+=f[i];
		cf[i]=a;
			printf("%d-%d\t\t\t%d\t\t%d\t\t%d\t\t%d\n",low1+i*difference,high1+i*difference ,i*difference+m,f[i],f[i]*(i*difference+m),cf[i]);
	}
	printf("\n```````````````````````````````````````````````````````````````````````````````````");
	for(i=0;i<total_num;i++)
	{
		b+=f[i];
		c+=(f[i]*(i*difference+m));
	}
	printf("\nTotal Number(N) : %.2f",b);
	//calculating Quartile Deviation:
	printf("\n\nFor Quartile Deviation:");
	printf("\n`````````````````````````");
	float h,j,k,cl2,ch2;
	float Q1_term;
	//calculating Q1:
	printf("\nFor Q1:");
	Q1_term=(b/4.00);
	for(i=0;i<total_num;i++)
	{
		if(cf[i]<=Q1_term)
		{
			h=cf[i+1];
			j=cf[i];
			k=f[i+1];
			cl2=low1+(i+1)*difference;//class low-2
			ch2=high1+(i+1)*difference;//class high-2
		}
	}
	
	printf("\nQ1 term = %.2f",Q1_term);
	printf("\nIn CF, the cf just greater than %.2f is %.2f.",Q1_term,h);
	
	printf("\nQ1 class-interval = (%.2f - %.2f)",cl2,ch2);
	Q1=cl2+((Q1_term-j)*difference)/k;
	printf("\nQ1 = %.2f",Q1);
	
	 //calculating Q3:
	printf("\n\nFor Q3:");
	float l,n,o,cl3,ch3;
	float Q3_term;
	Q3_term=(3*b)/4.00;
	for(i=0;i<total_num;i++)
	{
		if(cf[i]<=Q3_term)
		{
			l=cf[i+1];
			n=cf[i];
			o=f[i+1];
			cl3=low1+(i+1)*difference;//class low-3
			ch3=high1+(i+1)*difference;//class high-3
		}
	}
	
	printf("\nQ1 term = %.2f",Q3_term);
	printf("\nIn CF, the cf just greater than %.2f is %.2f.",Q3_term,l);
	
	printf("\nQ1 class-interval = (%.2f - %.2f)",cl3,ch3);
	Q3=cl3+((Q3_term-n)*difference)/o;
	printf("\nQ1 = %.2f",Q3);
	
	QD=(Q3-Q1)/2.00;
	printf("\n\nQuartile Deviation (Q.D) = %.2f",QD);
	
}

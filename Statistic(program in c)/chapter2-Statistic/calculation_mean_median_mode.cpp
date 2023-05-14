#include<stdio.h>
#include<stdlib.h>
int start,end,high,low,f[100],n,i,diff=0,sum=0,m,total_fre=0,interval,cf=0;
int md_term;
float mean=0;
int class_5();
int class_10();
int class_20();
int main()
{
	int choose;
	printf("Calculate the mean,median and mode on the specific class intervals,\n");
	printf("Menu for choosing class-intervals\n");
	printf("1. class-interval:5\n");
	printf("2. class-interval:10\n");
	printf("3. class-interval:20\n");
	printf("4. exit\n");
	printf("choose any of the them.\n");
	scanf("%d",&choose);
	
	switch(choose)
	{
		case 1:
			class_5();
			break;
		case 2:
			class_10();
			break;
		case 3:
			class_20();
			break;
		case 4:
			exit(0);
			break;
		default:
			printf("choose the class-interval among option 1 or 2.\n");
			break;
	}
	return 0;
}
int class_5()
{	

	printf("Enter the total class-intervals : ");
	scanf("%d",&n);
	printf("Enter the starting point in a class-interval: ");
	scanf("%d",&start);
	printf("Enter the ending point in a class-interval: ");
	scanf("%d",&end);
	printf("Enter the frequency serially : \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&f[i]);
	}
	
	diff=(end-start)/n;
	printf("Enter the highest point in first class-interval: ");
	scanf("%d",&high);
	printf("Enter the lowest point in first class-interval: ");
	scanf("%d",&low);
	interval=(high-low)/2;
	m=interval;
	printf("Solution,\n");
	printf("class-interval(X)     frequency(f)     mid-point(m)      f*m   cumulative frequency(c.f)\n");
	
	for(i=0;i<n;i++)
	{
		cf=cf+f[i];
		printf("%d-%d%20d%20d%15d%13d\n",low+i*5,high+i*5 ,f[i],low+i*5+m,f[i]*(2*i*m+5),cf);
		
	}
	
	for(i=0;i<n;i++)
	{
		sum=sum+f[i]*(2*i*m+5);
		++sum;
		total_fre=total_fre+f[i];
		++total_fre;
	}
	mean=(sum-n)/(total_fre-n);
	printf("\ntotal(f*m) = %d",sum-n);
	printf("\ntotal frequency(N) = %d",total_fre-n);
	printf("\nMean = %.2f",mean);
	printf("\n................................................................\n");
	//finding median
	int cf[100],a,d,e,g,fre;
	md_term=(total_fre-n)/2;
	printf("Median term=%d",md_term);
	printf("\nEnter the above cumulative frequency:\n");
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&cf[i]);	
	}
	for(i=0;i<n;i++)
	{
		if(cf[i]>md_term)
		{
			a=cf[i];
			d=low+i*5;
			e=high+i*5;
			g=cf[i-1];
			fre=f[i];
			break;	
		}	
	}
	printf("In c.f,cf just greater than %d is %d.",md_term,a);
	
	printf("\nClass-interval = %d-%d",d,e);
	printf("\nFrequency = %d",fre);
	printf("\nRequired cf = %d",g);
	int median=d+(md_term-g)*(high-low)/fre;
	printf("\nMedian = %d",median);
	printf("\n................................................................\n");
	//finding mode
	int max,f0,f1,f2;
	int s=0,b=0;//'s' represent small and 'b' represent big
	max=f[0];
	for(i=0;i<n;i++)
	{
		if(f[i]>max)
		{
			max=f[i];
			f0=f[i-1];
			f2=f[i+1];
			s=low+i*5;
			b=high+i*5;
		}
	}
	f1=max;
	printf("\nf0 = %d\nf1=%d\nf2=%d",f0,f1,f2);
	printf("\nclass interval= %d-%d",s,b);
	int mode=s+(5*(f1-f0))/(2*f1-f0-f2);
	printf("\nMode = %d",mode);
	printf("\n................................................................\n");	
}
int class_10()
{	

	printf("Enter the total class-intervals : ");
	scanf("%d",&n);
	printf("Enter the starting point in a class-interval: ");
	scanf("%d",&start);
	printf("Enter the ending point in a class-interval: ");
	scanf("%d",&end);
	printf("Enter the frequency serially : \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&f[i]);
	}
	
	diff=(end-start)/n;
	printf("Enter the highest point in first class-interval: ");
	scanf("%d",&high);
	printf("Enter the lowest point in first class-interval: ");
	scanf("%d",&low);
	interval=(high-low)/2;
	m=interval;
	printf("Solution,\n");
	printf("class-interval(X)     frequency(f)     mid-point(m)      f*m   cumulative frequency(c.f)\n");
	
	for(i=0;i<n;i++)
	{
		cf=cf+f[i];
		printf("%d-%d%20d%20d%15d%13d\n",low+i*10,high+i*10 ,f[i],low+i*10+m,f[i]*(2*i*m+5),cf);
		
	}
	
	for(i=0;i<n;i++)
	{
		sum=sum+f[i]*(2*i*m+5);
		++sum;
		total_fre=total_fre+f[i];
		++total_fre;
	}
	mean=(sum-n)/(total_fre-n);
	printf("\ntotal(f*m) = %d",sum-n);
	printf("\ntotal frequency(N) = %d",total_fre-n);
	printf("\nMean = %.2f",mean);
	printf("\n................................................................\n");
	//finding median
	int cf[100],a,d,e,g,fre;
	md_term=(total_fre-n)/2;
	printf("Median term=%d",md_term);
	printf("\nEnter the above cumulative frequency:\n");
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&cf[i]);	
	}
	for(i=0;i<n;i++)
	{
		if(cf[i]>md_term)
		{
			a=cf[i];
			d=low+i*10;
			e=high+i*10;
			g=cf[i-1];
			fre=f[i];
			break;	
		}	
	}
	printf("In c.f,cf just greater than %d is %d.",md_term,a);
	
	printf("\nClass-interval = %d-%d",d,e);
	printf("\nFrequency = %d",fre);
	printf("\nRequired cf = %d",g);
	int median=d+(md_term-g)*(high-low)/fre;
	printf("\nMedian = %d",median);
	printf("\n................................................................\n");
	//finding mode
	int max,f0,f1,f2;
	int s=0,b=0;//'s' represent small and 'b' represent big
	max=f[0];
	for(i=0;i<n;i++)
	{
		if(f[i]>max)
		{
			max=f[i];
			f0=f[i-1];
			f2=f[i+1];
			s=low+i*10;
			b=high+i*10;
		}
	}
	f1=max;
	printf("\nf0 = %d\nf1=%d\nf2=%d",f0,f1,f2);
	printf("\nclass interval= %d-%d",s,b);
	int mode=s+(10*(f1-f0))/(2*f1-f0-f2);
	printf("\nMode = %d",mode);
	printf("\n................................................................\n");	
}

int class_20()
{	

	printf("Enter the total class-intervals : ");
	scanf("%d",&n);
	printf("Enter the starting point in a class-interval: ");
	scanf("%d",&start);
	printf("Enter the ending point in a class-interval: ");
	scanf("%d",&end);
	printf("Enter the frequency serially : \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&f[i]);
	}
	
	diff=(end-start)/n;
	printf("Enter the highest point in first class-interval: ");
	scanf("%d",&high);
	printf("Enter the lowest point in first class-interval: ");
	scanf("%d",&low);
	interval=(high-low)/2;
	m=interval;
	printf("Solution,\n");
	printf("class-interval(X)     frequency(f)     mid-point(m)      f*m   cumulative frequency(c.f)\n");
	
	for(i=0;i<n;i++)
	{
		cf=cf+f[i];
		printf("%d-%d%20d%20d%15d%13d\n",low+i*20,high+i*20 ,f[i],low+i*20+m,f[i]*(low+i*20+m),cf);
		
	}
	
	for(i=0;i<n;i++)
	{
		sum=sum+f[i]*(low+i*20+m);
		++sum;
		total_fre=total_fre+f[i];
		++total_fre;
	}
	mean=(sum-n)/(total_fre-n);
	printf("\ntotal(f*m) = %d",sum-n);
	printf("\ntotal frequency(N) = %d",total_fre-n);
	printf("\nMean = %.2f",mean);
	printf("\n................................................................\n");
	//finding median
	int cf[100],a,d,e,g,fre;
	md_term=(total_fre-n)/2;
	printf("Median term=%d",md_term);
	printf("\nEnter the above cumulative frequency:\n");
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&cf[i]);	
	}
	for(i=0;i<n;i++)
	{
		if(cf[i]>md_term)
		{
			a=cf[i];
			d=low+i*20;
			e=high+i*20;
			g=cf[i-1];
			fre=f[i];
			break;	
		}	
	}
	printf("In c.f,cf just greater than %d is %d.",md_term,a);
	
	printf("\nClass-interval = %d-%d",d,e);
	printf("\nFrequency = %d",fre);
	printf("\nRequired cf = %d",g);
	int median=d+(md_term-g)*(high-low)/fre;
	printf("\nMedian = %d",median);
	printf("\n................................................................\n");
	
	//finding mode
	int max,f0,f1,f2;
	int s=0,b=0;//'s' represent small and 'b' represent big
	max=f[0];
	
	for(i=0;i<n;i++)
	{
		if(f[i]>max)
		{
			max=f[i];
			f0=f[i-1];
			f2=f[i+1];
			s=low+i*20;
			b=high+i*20;
		}
	}
	f1=max;
	printf("\nf0 = %d\nf1=%d\nf2=%d",f0,f1,f2);
	printf("\nclass interval= %d-%d",s,b);
	int mode=s+(20*(f1-f0))/(2*f1-f0-f2);
	printf("\nMode = %d",mode);
	
	
}

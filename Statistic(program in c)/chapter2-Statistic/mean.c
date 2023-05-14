#include<stdio.h>
int main()
{
	int digit=0,num_class;
	int N,i,item[100];
	int c=0,d=0,e=0,f=0,g=0,h=0;
	printf("Enter the total number of items(X):");
	scanf("%d",&N);
	if(N<50)
	{
		num_class=10;
	}
	else if(N>=50 &&N<100)
	{
		num_class=15;
	}
	else
	{
		num_class=20;
	}
	//assigning the input from users
	printf("Enter the items(X):\n");
	for(i=1;i<=N;i++)
	{
		scanf("%d",&item[i]);
	}
	//finding the lowest digit in the array.
	int high,low;
	high=item[1];
	for(i=1;i<=N;i++)
	{
		if(item[i]>high)
		{
			high=item[i];
		}
	}
	low=item[1];
	for(i=1;i<=N;i++)
	{
		if(item[i]<low)
		{
			low=item[i];
		}
	}
	printf("\nLowest item= %d.",low);
	printf("\nHighest item= %d.",high);
	
	//finding the class to start
	digit=low%10;
	
	int class=low-digit;
	int range=high-low;
	int interval=range/num_class;
	printf("\nclass start from %d.",class);
	printf("\nThe difference of class-interval will be of %d.",interval);

	//creating the class intervals
	
	for(i=1;i<=N;i++)
	{
		if(item[i]>=class && item[i]<class+interval)
		{
			c++;
		}
		if(item[i]>=(class+interval) && item[i]<(class+2*interval))
		{
			d++;
		}
		if(item[i]>=(class+2*interval) && item[i]<(class+3*interval))
		{
			e++;
		}
		if(item[i]>=(class+3*interval) && item[i]<(class+4*interval))
		{
			f++;
		}
		if(item[i]>=(class+4*interval) && item[i]<(class+5*interval))
		{
			g++;
		}
		if(item[i]>=(class+5*interval) && item[i]<(class+6*interval))
		{
			h++;
		}
	}
	printf("\nNumber of items between 0 to 10: %d",c);
	printf("\nNumber of items between 10 to 20: %d",d);
	printf("\nNumber of items between 10 to 20: %d",e);
	printf("\nNumber of items between 30 to 40: %d",f);
	printf("\nNumber of items between 40 to 50: %d",g);
	printf("\nNumber of items between 50 to 60: %d",h);
	//finding midpoint
	int high1=10,low1=0;
	int m1=(low1+high1)/2;
	int s1=0;
	s1=m1*c;
	int high2=10,low2=20;
	int m2=(low2+high2)/2;
	int s2=0;
	s2=m2*d;
	int high3=20,low3=30;
	int m3=(low3+high3)/2;
	int s3=0;
	s3=m3*e;
	int high4=30,low4=40;
	int m4=(low4+high4)/2;
	int s4=0;
	s4=m4*f;
	int high5=40,low5=50;
	int m5=(low5+high5)/2;
	int s5=0;
	s5=m5*g;
	int high6=50,low6=60;
	int m6=(low6+high6)/2;
	int s6=0;
	s6=m6*h;
	
	s1=m1*c;
	printf("\n....................................................\n");
	printf("Item(X)     midpoint(m)     frequency(f)         f*m");
	printf("\n0-10            %d              %d             %d",m1,c,s1);
	printf("\n10-20            %d              %d             %d",m2,d,s2);
	printf("\n20-30            %d              %d             %d",m3,e,s3);
	printf("\n30-40            %d              %d             %d",m4,f,s4);
	printf("\n40-50            %d              %d             %d",m5,g,s5);
	printf("\n50-60            %d              %d             %d",m6,h,s6);
	printf("\n....................................................\n");
	//finding mean
	int sum=s1+s2+s3+s4+s5+s6;
	int mean=sum/N;
	printf("\nMean = %d",mean);
	return 0;
}

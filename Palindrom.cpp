#include<stdio.h>
main()
{
	int n,sum=0,r,temp;
	printf("Enter number ");
	scanf("%d",&n);
	 temp=n;
	
	while(n>0)
	{
		r=n%10;
		sum=sum*10+r;
		n/=10;
		
	}
	n=temp;
	if(n==sum)
	{
		printf("palindrom");
	}
	else
	{
		printf("not palindrom");
	}
	
	
}

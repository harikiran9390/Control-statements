#include<stdio.h>
main()
{
	int n,i,a=0,b=1,c;
	printf("enter limit");
	scanf("%d",&n);
/*	for(i=1;i<=n;i++)
	{
		printf("%d",a);
		c=a+b;
		a=b;
		b=c;
		
	}
	*/
	i=2;
	while(i<=n)
	{
		printf("%d",a);
		c=a+b;
		a=b;
		b=c;
		++i;
	}
}

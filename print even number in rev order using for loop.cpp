#include<stdio.h>
//print even numbers in rev order using for loop
main()
{
	int i,n;
	printf("enter num");
	scanf("%d",&n);
	for(i=n;i>1;i--)
	{
		if(i%2==0)
		{
			printf("%d\n",i);
		}
	}
}

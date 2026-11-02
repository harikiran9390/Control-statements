#include<stdio.h>
//print odd numbers in rev order using for loop
main()
{
	int i,n;
	printf("enter number");
	scanf("%d",&n);
	for(i=n;i>1;i--)
	{
		if(i%2!=0)
		{
			printf("%d\n",i);
		}
	}
}

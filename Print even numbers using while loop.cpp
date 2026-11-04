#include<stdio.h>
main()
{
	int i=2,n;
	printf("enter num");
	scanf("%d",&n);
	while(i<=n)
	{
		if(i%2==0)
		{
			printf("%d\n",i);
		}
		i++;
	}
}

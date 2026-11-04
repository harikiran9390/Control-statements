#include<stdio.h>
main()
{
	int i,n;
	printf("enetr integer");
	scanf("%d",&n);
	i=1;
	while(i<=n)
	{
		if(i%2!=0)
		{
			printf("%d\n",i);
		}
		i++;
	}
}

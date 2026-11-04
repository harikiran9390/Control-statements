#include<stdio.h>
main()
{
	int i,n;
	scanf("%d",&n);
	i=1;
	while(i<=10)
	{
		printf("%d*%d=%d\n",n,i,n*i);
		i++;
	}
}

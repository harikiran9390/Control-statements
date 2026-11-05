#include<stdio.h>
main()
{
	int i,n;
	printf("enter integer");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		if(i%2!=0)
		{
			continue;
			
		}
		printf("%d\n",i);
	}
}

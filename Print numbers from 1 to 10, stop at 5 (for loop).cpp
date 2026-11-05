#include<stdio.h>
//Print numbers from 1 to 10, stop at 5 (for loop)
main()
{
	int i;
	for(i=1;i<=10;i++)
	{
		if(i==5)
		{
			break;
		}
		printf("%d",i);
	}
}

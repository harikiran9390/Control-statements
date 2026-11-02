#include<stdio.h>
//Find sum of even numbers from 1 to 20
/*main()
{
	int i,sum=0;
	for(i=2;i<=20;i+=2)
	{
		sum=sum+i;
	}
	printf("%d",sum);
}
*/
main()
{
	int i,sum=0;
	for(i=2;i<=20;i++)
	{
		if(i%2==0)
		{
			printf("%d",i);
		}
		sum=sum+i;
		
	}
	printf("%d",sum);
}

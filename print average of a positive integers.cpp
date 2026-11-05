#include<stdio.h>
main()
{
	int n,i=0,a,sum=0,avg;
	printf("enter integer");
	scanf("%d",&n);
	while(i<n)
	{
		printf("enter +ve numbers");
		scanf("%d",&a);
		if(a<0)
		{
			printf("you entered -ve number ");
			continue;
		}
		sum+=a;
		i++;
	}
	 avg=(float)sum/n;
	printf("%d",avg);
	
}

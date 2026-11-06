#include<stdio.h>
main()
{
	int a,c,i;
	printf("enter variable");
	scanf("%d",&a);
	printf("enter1 is pos or negative num:\n enter2 is even or odd:\n enter 3 is mulplication table");
	scanf("%d",&c);
	switch(c)
	{
		case 1:
			if(a>0)
			{
				printf("positive number");
			}
			else
			{
				printf("Negative");
			
			}
			break;
		case 2:
		      if(a%2==0)
			  {
			  	printf("even number ");
			  }	
			  else
			  {
			    printf("Odd number");	
				}
			break;
		case 3:
		    for(i=1;i<=10;i++)
			{
				printf("%d*%d=%d\n",a,i,a*i);
			}
			break;		
	}   
}

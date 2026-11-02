#include<stdio.h>
/*Calculate student grades:
90–100: A
80–89: B
70–79: C
60–69: D
Below 60: Fail*/
main()
{
	int x;
	printf("enter marks");
	scanf("%d",&x);
	if(x>=90&&x<=100)
	{
		printf("A Grade");
	}
	else if(x>=80&&x<=89)
	{
		printf("B Grade");
	}
	else if(x>=70&&x<=79)
	{
		printf("C Grade");
	}
	else if(x>=60&&x<=69)
	{
		printf("D");
	}
	else
	{
		printf("Fail");
	}
}

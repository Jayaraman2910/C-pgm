
#include<stdio.h>
void main()
{
	int a;
	printf("enter the num:");
	scanf("%d",a);

	while(a%10!=0)
	{
	a=a+1;
	}
	printf("the ans:%d",a);
}

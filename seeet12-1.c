#include<stdio.h>
#include<conio.h>
void main()
{
	int n,c=0,r;
	scanf("%d",&n);
	while(n!=0)
	{
		r=r%10;
		c=c+1;
		n=n/10;
	}
	printf("%d",c);
getch();
}

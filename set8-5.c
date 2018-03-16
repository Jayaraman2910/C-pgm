#include<stdio.h>
#include<string.h>
void main()
{
	char string[30];
	int a,i;
	printf("enter the string:");
	scanf("%s",string);
	a=strlen(string);
	if(a%2==0)
	{
		str[a/2]='*';
		str[(a/2)-1]='*';
	}
	else
	{
		str[a/2]='*';
	}
	printf("\n%s",string);
	getch();
}

#include <stdio.h>
#include<string.h>
void main()
{
	char s[56];
	int i,l,v;
	printf("enter the string\n");
	scanf("%s",s);
	l=strlen(s);
	for(i=0;i<l;i++)
	{           v=i+1;
		if(v%2==1)
		printf("%c",s[i]);
	}
	printf("\n");
	for(i=0;i<l;i++)
	{
		v=i+1;
	if(v%2==0)
	
	printf("%c",s[i]);
	}
	getch();
}

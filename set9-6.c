#include <stdio.h>
#include<string.h>
void main()
{
	char ch[50];
	int i,a=0;
	printf("\nenter the string:");
	scanf("%s",ch);
	for(i=0;ch[i]!='\0';i++)
	{
		if(ch[i]==ch[i+1])
		{
			a=1;
			break;
		}
	}
	if(a==1)
	printf("\n  no");
	else
	printf("\n  yes");
	getch();
}

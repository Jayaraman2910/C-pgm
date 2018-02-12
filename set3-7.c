#include<stdio.h>
#include<string.h>
void main()
{
char a;
printf("\n Enter the name");
scanf("%c",&a);
if(a>='0'&&a<='9')
{
printf("\n it is numeric");
}
else
printf("\n it is string");
getch();
}

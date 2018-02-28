#include<stdio.h>
#include<string.h>
void main()
{
char a[100],b=0,c=0,l,i;
printf("\n Enter the string");
scanf("%s",&a);
l=strlen(a);
for(i=0;a[i]!='\0';i++)
{
if(a[i]>='0'&& a[i]<='9')
{
c++;
}
else
{
b++;
}
}
if(c>0)
printf("YES");
else
printf("NO");
getch();
}

#include<stdio.h>
#include<string.h>
void main()
{
char a[100];
int i,q;
printf("\n Enterthe sentence");
scanf("%s",&a);
q=strlen(a);
for(i=0;i<q;i++)
{
if(i==0)
{
a[i]=toupper(a[i]);
printf("\n %c",a[i]);
}
else
{
printf("%c",a[i]);
}
}
getch();
}

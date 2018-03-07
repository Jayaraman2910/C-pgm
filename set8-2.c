#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char a[100];
int i,l,b=0;
printf("Enter the string");
scanf("%s",a);
l=strlen(a);
for(i=0;i<l;i++)
{
if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U')
{
b=1;
break;
}
else
{


}
}
if(b==1)
printf("\n yes");
else
printf("\n NO");
getch();
}

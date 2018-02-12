#include<stdio.h>
#include<string.h>
int main()
{
char a[100];
int i,b=0;
scanf("%s",&a);
for(i=0;i<a[100];i++)
{
if(a[i]>90)
{
b++;
}
printf("%d",b);
return 0;
}

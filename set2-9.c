#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,a=1;
printf("\n Enter the value of n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
a=i*a;
}
printf("%d",a);
}

#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,i;
printf("\n Enter the values of a");
scanf("%d",&a);
for(i=1;i<=5;i++)
{
b=i*a;printf("%d\t",b);
}
getch();
}

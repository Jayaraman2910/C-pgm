#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
printf("\n Enter the value of a");
scanf("%d",&a);
if(a%2==0)
{
b=a-1;
printf("%d",b);
}
else
{
printf("%d",a);
}
getch();
}

#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
printf("\n Enter the value of a and b");
scanf("%d%d",&a,&b);
c=a*b;
if(c%2==0)
{
printf("\n EVEN",c);
}
else
{
printf("\n ODD",c);
}
getch();
}

#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
printf("\n Enter the values of a and b");
scanf("%d%d",&a,&b);
c=a;
a=b;
b=c;
printf("%d  %d",a,b);
getch();
}

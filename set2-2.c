#include<stdio.h>
void main()
{
int e,g,h,n=0;
printf("\n enter the number");
scanf("%d",&e);
g=e;

while(g!=0)
{
h=g%10;
n=n*10+h;
e=e/10;
}
if(g==n)
printf("\n the given number is palindrome");
else
printf("\n the number is not a palindrome");
getch();
}

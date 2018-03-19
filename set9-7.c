#include<stdio.h>
#include<conio.h>
void main()
{
int x,y,rem,gcd;
printf("entr two num\n");
scanf("%d%d",&x,&y);
do
{
rem=x%y;
if(rem==0)
break;
x=y;
y=rem;
}
while(rem!=0);
gcd=y;
printf("%d",gcd);
getch();
}

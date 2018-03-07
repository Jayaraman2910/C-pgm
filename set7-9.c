#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,c;
printf("\n Enter the two numbers");
scanf("%d%d",&a,&b);
c=a-b;
if(c%2==0)
{
printf("ODD");
}
else
{
printf("EVEN");
}
return 0;
}

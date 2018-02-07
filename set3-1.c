#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,sum=0,i,d;
printf("the times");
scanf("%d",&d);
printf("\n Enter the values of a and b");
scanf("%d%d",&a,&b);
c=a+b;
for(i=0;i<d;i++)
{
sum=sum+c;
}
printf("\n sum is%d",sum);
}

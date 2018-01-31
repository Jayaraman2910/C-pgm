#include<stdio.h>
#include<conio.h>
void main()
{
int i=1,num,sum=0;
printf("enter the sum of natural numbers");
scanf("%d",&num);
while(i<=num)
{
sum= sum+i;
i++;
}
printf("%d",sum);
getch();
}

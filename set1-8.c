#include<stdio.h>
void main()
{
int k=1,num,sum=0;
printf("Enter the sum of natural numbers");
scanf("%d",&num);
while(k<=num)
{
sum= sum+k;
k++;
}
printf("%d",sum);
getch();
}

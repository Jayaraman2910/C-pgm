#include<stdio.h>
#include<conio.h>
void main()
{
int a,i,s=0;
printf("\n Enter the number.....");
scanf("%d",&a);
for(i=0;i<=a;i++)
{
s=s+i;
}
printf("\n The sum is....%d",s);
getch();
}

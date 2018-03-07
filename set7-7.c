#include<stdio.h>
#include<conio.h>
void main()
{
int i,a,b;
printf("\n Enter the number");
scanf("%d",&a);
for(i=a;i<=(a*10);i++)
{
if(i%10==0)
{
printf("%d",i);
break;
}
}
getch();
}

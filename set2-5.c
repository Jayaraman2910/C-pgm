#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,i;
printf("\n Enter the values");
scanf("%d%d",&a,&b);
for(i=a+1;i<b;i++)
{
if(i%2==0)
{
printf("%d",i);
}
}
return 0;
getch();
}

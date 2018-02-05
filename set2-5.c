#include<stdio.h>
#include<conio.h>
void main()
{
int c,d,i;
printf("\n Enter the values");
scanf("%d%d",&c,&d);
for(i=c+1;i<d;i++)
{
if(i%2==0)
{
printf("%d",i);
}
}
return 0;
getch();
}

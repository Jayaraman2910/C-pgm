#include<stdio.h>
#include<conio.h>
void main()
{
int a,x=0,i;
printf("ENTER The number:\n");
scanf("%d",&a);
for(i=0;a>10;a++)
{
x=a%10;
a=a/10;
if(x%10==0||x%10==1)
{
printf( "Yes");
break;
}
else
{
printf( "No");
}
}
getch();	
}

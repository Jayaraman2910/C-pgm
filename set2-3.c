#include<stdio.h>
void main()
{
int i,a,b,var=0;
printf("\n Enter the number");
scanf("%d",&a);
b=a/2;
for(i=2;i<=b;i++)
{
if(a%i==0)
{
var=1;
break;
}
}
if(var==0)
{
printf("\nGiven nuumber is prime number");
}
else
printf("\n Given number is not primme");
getch();
}


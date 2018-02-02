
#include<stdio.h>
int main()
{
int a,b=011235,i;
scanf("%d",&a);
if(a>0)
{
for(i=1;a!=b;i++)
{
b = b / 10 ;
}
printf("YES");
}
else
{
printf("NO");
}
return 0;
}

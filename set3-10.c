#include<stdio.h>
int main()
{
int h1,h2,m1,m2,h,m;
printf("\n Enter the h1 and m1");
scanf("%d%d",&h1,&m1);
printf("\n Enter the h2 and m2");
scanf("%d%d",&h2,&m2);
if(h1>h2)
{
h=h1-h2;
}
else
{
h=h2-h1;
}
if(m1>m2)
{
m=m1-m2;
}
else
{
m=m2-m1;
}
printf("\n The time is %d:%d",h,m);
return 0;
}

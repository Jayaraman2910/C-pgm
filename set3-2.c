#include<stdio.h.>
int main()
{
int j=1,n,c[20],i,b;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&c[i]);
}
for(i=0;i<(n-1);i++)
{
b=c[i]>c[j]?c[i]:c[i+1];
}
printf("%d",b);
return 0;
}

#include<stdio.h>
int main()
{
int n,b[34],i;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",b[i]);
}
for(i=0;i<n;i++)
{
printf("%d%d\n",b[i],i);
}
return 0;
}

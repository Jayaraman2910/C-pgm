#include<stdio.h>
int main()
{
int i,k,l,m,e=0;
printf("\n Enter the range....");
scanf("%d%d",&k,&l);
for (i=k;i<=l;i++)
{
     for(d=2; m<=i/2; ++m)
{
if(i%m==0)
        {
            e=1;
            break;
        }
}

    if (e==0)
printf("\n%d",i);
}
return 0;
}

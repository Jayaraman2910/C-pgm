#include<stdio.h>
#include<conio.h>
void main() 
{
   int n,k,a[50],i;
   scanf("%d",&n);
   scanf("%d",&k);
   for(i=1;i<=n;i++)
   {
       scanf("%d",&a[i]);
   }
   printf("%d",a[k]);
   getch();
}

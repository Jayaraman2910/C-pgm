#include<stdio.h>
#include<conio.h>
int main()
{
int n,a[10],i,j,temp,c=0;
printf("enter the number");
scanf("%d",&n);
printf("enter the values in ascending oreder with one change");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
    if(a[i]>a[j])
    {
temp=a[i];
a[i]=a[j];
a[j]=temp;
c++;
}
}
}
printf("%d",c);
return 0;
}

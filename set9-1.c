#include<stdio.h>

int main()
{
    int a[1000],b[1000],i,l,c;
    scanf("%d",&l);
    for(i=0;i<l;i++)
    {
        scanf("%d%d",&a[i],&b[i]);
    }
    for(i=0;i<l;i++)
    {
        if(a[i]>b[i])
        {
        printf("%d\n",a[i]-b[i]);
        }
        else
        {
            printf("%d\n",b[i]-a[i]);
        }
    }
    printf("END OF FILE");
return 0;
}

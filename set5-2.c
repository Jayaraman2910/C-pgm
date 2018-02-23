#include<stdio.h>
#include<string.h>
int main()
{
char a[25],b[40];
int a1,b1;
printf("Enter the string");
scanf("%s",a);
printf("Enter the string");
scanf("%s",b);
s1=strlen(a);
s2=strlen(b);
if(s1>s2) 
{
printf("The string is....: %s",a);
}
else
{
printf("The string is....: %s",b);
}
return 0;
}

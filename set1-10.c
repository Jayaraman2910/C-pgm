#include<stdio.h>
#include<conio.h>
viod main()
{
int count=0;
long a;
printf("Enter the numbers:");
scanf("%ld",a);
while(a!=0)
{
count++;
a=a/10;
}
printf("The count is%ld",count);
getch();
}

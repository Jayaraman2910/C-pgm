#include <stdio.h>
#include<conio.h>
#include <string.h>
int main()
{
char s[100];
int count=0,i;
clrscr();
printf("\n Write the paragraph:");
scanf("%[^\n]s",s);
for(i=0;s[i]>0;i++)
{
if(s[i]==' ')
count++;    
}
printf("\n Number of lines are: %d",count);
getch();
return 0;
}

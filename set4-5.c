#include <stdio.h>
#include<conio.h>
#include <string.h>
int main()
{
char s[100];
int count=0,i;
clrscr();
printf("\n Write the integers:");
scanf("%[^\n]s",s);
for(i=0;s[i]>0;i++)
{
if(s[i]=='0'||s[i]=='1'||s[i]=='2'||s[i]=='3'||s[i]=='4'||s[i]=='5'||s[i]=='6'||s[i]=='7'||s[i]=='8'||s[i]=='9')
count++;    
}
printf("\n Number of integers are: %d",count);
getch();
return 0;
}

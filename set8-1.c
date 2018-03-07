#include<stdio.h>
#include<string.h>
void main() 
{
char a[100];
int c=0,i,n;
printf("Enter a string:");
scanf("%s",a);
n=strlen(a);
for(i=0;i<n;i++)
{
if(a[i]==a[n-i-1])
{
c++;
}
}
if(n==c){
printf("It is Palindrome");
}
else
{
printf("It is not a palindrome");
}
getch();
}

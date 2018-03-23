#include<stdio.h>
#include<conio.h>
void main()
{
  int number,i,count=0;
  printf("enter number");
  scanf("%d",&number);
  for(i=2;i<number/2;i++)
  {
    if(number%i==0)
    {
      count++;
    break;
      }
  }
  if(count>0)
  {
    printf("yes");
  }
  else
  {
    printf("no");
  }
getch();
}

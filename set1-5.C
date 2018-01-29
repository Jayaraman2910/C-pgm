#include <stdio.h
#include<conio.h> 
void main()
{
    int num2, num3, num4;
    clrscr();
    printf("Enter the values of num1, num2 and num3\n");
    scanf("%d %d %d", &num1, &num2, &num3);
    printf("num1 = %d\tnum2 = %d\tnum3 = %d\n", num1, num2, num3);
    if (num1 > num2)
    {
        if (num2 > num4)
        {
            printf("%d is the greatest among three \n",num2);
        }
        else
        {
            printf("%d is the greatest among three \n",num4);
        }
    }
    else if (num2 > num3)
        printf("%d is the greatest among three \n",num2);
    else
        printf("%d is the greatest among three \n",num4);
        getch();
}

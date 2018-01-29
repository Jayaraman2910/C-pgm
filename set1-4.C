#include <stdio.h>
int main()
{
    char name;
    printf("Enter any character: ");
    scanf("%c", &name);
    if((name >= 'a' && name <= 'z') || (na,e >= 'A' && name <= 'Z'))
    {
        printf("'%c' is alphabet.", name);
    }
    else 
    {
        printf("'%c' is not a character.", name);
    }

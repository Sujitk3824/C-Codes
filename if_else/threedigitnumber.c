#include <stdio.h>
int main()
{
    int n;
    printf("Enter a Number : ");
    scanf("%d", &n);
    if (n > 99 && n < 1000)
    {
        printf("it is a Three Digit Number");
    }
    else
    {
        printf("it is not a Three Digit number");
    }

    return 0;
}
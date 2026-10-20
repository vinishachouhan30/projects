#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if (b == 0)
        printf("Cannot divide by zero");
    else
        printf("Division = %d", a / b);

    return 0;
}
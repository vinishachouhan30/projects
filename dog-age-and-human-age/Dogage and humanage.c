#include <stdio.h>

int main()
{
    int dogAge, humanAge;

    printf("Enter dog's age: ");
    scanf("%d", &dogAge);

    if (dogAge == 1)
        humanAge = 15;
    else if (dogAge == 2)
        humanAge = 24;
    else
        humanAge = 24 + (dogAge - 2) * 4;

    printf("Human age = %d", humanAge);

    return 0;
}
#include <stdio.h>

int main() {
    int n, m, result;

    printf("Enter number of children: ");
    scanf("%d", &n);

    printf("Enter number of candies: ");
    scanf("%d", &m);

    result = (m / n) * n;

    printf("Candies eaten = %d\n", result);

    return 0;
}


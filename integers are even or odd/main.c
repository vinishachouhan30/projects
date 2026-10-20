#include <stdio.h>

int main() {
    int n, d;

    scanf("%d", &n);

    while (n > 0) {
        d = n % 10;

        if (d % 2 != 0) {
            printf("false");
            return 0;
        }

        n = n / 10;
    }

    printf("true");

    return 0;
}


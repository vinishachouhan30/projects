#include <stdio.h>

int main() {
    int h, m;

    scanf("%d:%d", &h, &m);

    if (h < 24 && m < 60)
        printf("true");
    else
        printf("false");

    return 0;
}


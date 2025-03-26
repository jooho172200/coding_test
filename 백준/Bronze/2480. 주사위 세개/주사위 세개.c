#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int a, b, c, max, mon;

    scanf("%d %d %d", &a, &b, &c);

    if (a == b && b == c) {
        mon = 10000 + (a * 1000);
    }
    else if (a == b || a == c) {
        mon = 1000 + (a * 100);
    }
    else if (b == c) {
        mon = 1000 + (b * 100);
    }
    else {
        if (a > b && a > c) {
            max = a;
        }
        else if (b > a && b > c) {
            max = b;
        }
        else if (c > a && c > b) {
            max = c;
        }

        mon = max * 100;
    }

    printf("%d", mon);

    return 0;
}
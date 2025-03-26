#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int a,b,c,d;
    int sum = 0;

    scanf("%d %d", &a, &b);

    for (int i = 0; i < b; i++) {
        scanf("%d %d", &c, &d);
        sum += c * d;
    }

    if (sum == a) {
        printf("Yes");
    }
    else printf("No");

    return 0;
}
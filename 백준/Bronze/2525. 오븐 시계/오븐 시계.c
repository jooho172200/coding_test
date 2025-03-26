#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int H,M,c;
    scanf("%d %d %d", &H, &M, &c);

    H += c / 60;
    M += c % 60;

    if (M >= 60) {
        M -= 60;
        H += 1;
    }

    if (H >= 24) {
        H -= 24;
    }

        
    printf("%d %d", H, M);

    return 0;
}
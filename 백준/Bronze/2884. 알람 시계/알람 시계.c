#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int H,M;
    scanf("%d %d", &H, &M);

    if (H>0 && M < 45) {
        H -= 1;
        M = 60 - (45 - M);

    } else if (H > 0 && M >= 45) {
        M -= 45;
    }
      else if (H == 0 && M >= 45) {
        M -= 45;
    }
      else if (H == 0 && M < 45) {
        H = 23;
        M = 60 - (45 - M);
    }

    printf("%d %d", H, M);

    return 0;
}
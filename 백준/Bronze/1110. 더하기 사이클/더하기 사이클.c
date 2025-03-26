#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int a, b, c;
    int d = -1;
    int result, input;
    int count = 0;

    scanf("%d", &input);
    result = input;

    while (d != result) {
        a = input / 10;
        b = input % 10; 
        c = (a + b) % 10; 
        d = (b * 10) + c; 
        input = d;
        count++;
    }
    printf("%d", count);

    return 0;
}
#include <stdio.h>

int main () {
    int a;
    int b;
    float plus = 0;
    float minus = 0;
    float zero = 0;
    scanf("%d", &a);
    for (int i = 0; i < a; i++) {
        scanf("%d", &b);
        if (b > 0) {
            plus++;
        }
        else if (b == 0) {
            zero++;
        }
        else if (b < 0) {
            minus++;
        }
    }
    printf("%f %f %f", zero, plus, minus);
    return 0;
}
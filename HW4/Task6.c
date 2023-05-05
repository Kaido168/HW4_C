#include <stdio.h>

int main () {
    int a;
    int b;
    int symm = 0;
    scanf("%d", &a);
    for (int i = 0; i < a; i++) {
        scanf("%d", &b);
        if (b > 0) {
            symm = symm + 1;
        }
    }
    printf("%d", symm);
    return 0;
}
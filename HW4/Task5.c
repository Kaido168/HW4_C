#include <stdio.h>

int main () {
    float sym = 0;
    float a = 0;
    float k = 100;
    float h; 
    while (k != 0) {
        scanf( "%f", &k );
        a++;
    } 
    h = sym / (a - 1);
    printf( "%f", h);
    return 0;
}
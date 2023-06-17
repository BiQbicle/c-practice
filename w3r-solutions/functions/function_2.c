#include <math.h>
#include <stdio.h>
int square(int a) { return pow(a, 2); }

int main(void) {
    int result = square(5);

    printf("%d", result);

    return 0;
}
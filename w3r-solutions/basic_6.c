#include <stdio.h>
int main() {
    double radius;
    char area_or_perimeter;
    printf("Type Your Radius: \n");
    scanf("%lf", &radius);
    printf("Area: ");
    printf("%lf\n", 3.14 * radius * radius);
    printf("Perimeter: ");
    printf("%lf\n", 2 * 3.14 * radius);

    return (0);
}
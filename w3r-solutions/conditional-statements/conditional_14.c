#include <stdio.h>

int main() {

    int side_1;
    int side_2;
    int side_3;
    printf("enter the sides of the triangle: ");
    scanf("%d%d%d", &side_1, &side_2, &side_3);

    if (side_1 == side_2 && side_1 == side_3) {
        printf("Equilateral Triangle");
    }
    else if (side_1 == side_2 || side_1 == side_3 || side_2 == side_3) {
        printf("Isosceles Triangle");
    }
    else {
        printf("Scalene Triangle");
    }

    return 0;
}
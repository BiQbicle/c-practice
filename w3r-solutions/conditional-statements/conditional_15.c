#include <stdio.h>

int main() {

    int angle1;
    int angle2;
    int angle3;
    printf("Enter angles for the triangle: ");
    scanf("%d%d%d", &angle1, &angle2, &angle3);

    if (180 - angle1 - angle2 - angle3 == 0) {
        printf("Triangle is valid");
    }
    else {
        printf("Triangle is not valid");
    }

    return 0;
}
#include <stdio.h>
#include "../input.h"


int main() {

    char character;

    printf("enter your character: ");
    scanf("%c", &character);

    if ((character >= 'a' && character <= 'z') || (character >= 'A' && character <= 'Z')) {
        printf("%c is an alphabetical char\n", character);
    }
    else if (character >= '0' && character <= '9') {
        printf("%c is a digit char\n", character);
    }
    else {
        printf("%c is a special char\n", character);
    }

    return 0;
}
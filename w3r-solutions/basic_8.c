#include <stdio.h>

int main() {
    int days;
    printf("Type Your Days: \n");
    scanf("%d", &days);
    printf("Years ");
    printf("%d\n", days / 365);
    printf("Weeks: ");
    printf("%d\n", days / 7);

    return 0;
}
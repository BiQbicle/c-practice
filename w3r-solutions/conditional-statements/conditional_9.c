#include <stdio.h>

int get_number_from_stdin(const char *defaultProompt,
                          const char *errorProompt) {
    int end;
    printf("%s", defaultProompt);
    scanf("%d", &end);
    while (end < -1000 || end > 1000) {
        printf("%s", errorProompt);
        scanf("%d", &end);
    }
    return end;
}

int main() {
    int co1 = get_number_from_stdin("enter your x coordinate: ",
                                    "enter a valid coordinate");
    int co2 = get_number_from_stdin("enter your y coordinate: ",
                                    "enter a valid coordinate");

    if (co1 > 0 && co2 > 0)
        printf("The coordinate point (%d,%d) lies in the First quadrant.\n",
               co1, co2);
    else if (co1 < 0 && co2 > 0)
        printf("The coordinate point (%d,%d) lies in the Second quadrant.\n",
               co1, co2);
    else if (co1 < 0 && co2 < 0)
        printf("The coordinate point (%d, %d) lies in the Third quadrant.\n",
               co1, co2);
    else if (co1 > 0 && co2 < 0)
        printf("The coordinate point (%d,%d) lies in the Fourth quadrant.\n",
               co1, co2);
    else if (co1 == 0 && co2 == 0)
        printf("The coordinate point (%d,%d) lies at the origin.\n", co1, co2);

    return 0;
}
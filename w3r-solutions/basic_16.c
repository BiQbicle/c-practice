#include <stdio.h>
int get_number_from_stdin(const char *defaultProompt,
                          const char *errorProompt) {
    int end;
    printf("%s", defaultProompt);
    scanf("%d", &end);
    while (end < 1 || end > 100000) {
        printf("%s", errorProompt);
        scanf("%d", &end);
    }
    return end;
}

int main() {
    int amt = get_number_from_stdin("Enter the amount",
                                    "Please Input A Valid Number");
    int total;

    total = (int)amt / 100;

    printf("There are: ");

    printf("\n%d Note(s) of 100.00\n", total);

    amt = amt - (total * 100);

    total = (int)amt / 50;

    printf("%d Note(s) of 50.00\n", total);

    amt = amt - (total * 50);

    total = (int)amt / 20;

    printf("%d Note(s) of 20.00\n", total);

    amt = amt - (total * 20);

    total = (int)amt / 10;

    printf("%d Note(s) of 10.00\n", total);

    amt = amt - (total * 10);

    total = (int)amt / 5;

    printf("%d Note(s) of 5.00\n", total);

    amt = amt - (total * 5);

    total = (int)amt / 2;

    printf("%d Note(s) of 2.00\n", total);

    amt = amt - (total * 2);

    total = (int)amt / 1;

    printf("%d Note(s) of 1.00\n", total);

    return 0;
}
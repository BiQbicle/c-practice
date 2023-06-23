#include <stdio.h>

int get_positive_integer(const char *defaultProompt, const char *errorProompt) {
    int end;
    printf("%s", defaultProompt);
    scanf("%d", &end);
    while (end < 1 || end > 1000) {
        printf("%s", errorProompt);
        scanf("%d", &end);
    }
    return end;
}

int get_positive_negative_integer(const char *defaultProompt,
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

char get_char(const char *defaultPrompt, const char *errorPrompt) {
    char end;
    printf("%s", defaultPrompt);
    scanf(" %c", &end);
    while (!((end >= 'a' && end <= 'z') || (end >= 'A' && end <= 'Z'))) {
        printf("%s", errorPrompt);
        scanf(" %c", &end);
    }
    return end;
}

int main(void) {
    int id = get_positive_integer("enter your id: ", "enter a valid id: ");
    int unit_consumed = get_positive_integer("enter your unit consumed: ",
                                             "enter a valid number: ");
    float surcharge_amount = 0;
    float net_amount;
    float amount_charges;
    float charge_per_unit;
    char name = get_char("enter your name: ", "enter a valid name: ");

    if (unit_consumed <= 199) {
        charge_per_unit = 1.20;
    } else if (unit_consumed > 200 && unit_consumed < 400) {
        charge_per_unit = 1.50;
    } else if (unit_consumed > 400 && unit_consumed < 600) {
        charge_per_unit = 1.80;
    } else {
        charge_per_unit = 2.00;
    }
    if (amount_charges > 400) {
        surcharge_amount = amount_charges * 15 / 100.0;
        net_amount = amount_charges + surcharge_amount;
    }
    if (net_amount < 100) {
        net_amount = 100;
    }
    printf("------------------------------\n");
    printf("Customer Id: %d\n", id);
    printf("Customter name: %c\n", name);
    printf("Unit consumed: %d\n", unit_consumed);
    printf("Amount Charges: %f\n", amount_charges);
    printf("Surcharge amount: %f\n", surcharge_amount);
    printf("Net amount: %f\n", net_amount);
    return 0;
}
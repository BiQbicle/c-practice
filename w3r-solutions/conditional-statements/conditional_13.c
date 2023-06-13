#include <stdio.h>
#include "../input.h"
int main() {

    int temperature = negative_positive_number_from_stdin("enter the temperature", "enter a valid temperature");
    if (temperature <= 0) {
        printf("Freezing Weather");
    }
    else if (temperature > 0 && temperature < 10) {
        printf("Very cold weather");
    }
    else if (temperature > 10 && temperature < 20) {
        printf("Cold weather");
    }
    else if (temperature > 20 && temperature < 30) {
        printf("Normal Weather");
    }
    else if (temperature > 30 && temperature < 40) {
        printf("Hot weather");
    }
    else if (temperature >= 40) {
        printf("Very hot weather");
    }

    return 0;
}
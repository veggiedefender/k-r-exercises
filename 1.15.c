/* Rewrite the temperature conversion program of Section 1.2 (exercise 1.3) to
use a function for conversion. */

#include <stdio.h>

float toCelsius(float fahr) {
    return (5.0 / 9.0) * (fahr - 32.0);
}

int main() {
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    printf("F\tC\n");
    fahr = lower;
    while (fahr <= upper) {
        celsius = toCelsius(fahr);
        printf("%3.0f\t%6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
    return 0;
}

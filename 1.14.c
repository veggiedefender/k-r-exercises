/* Write a program to print a histogram of the frequencies of different
characters in its input. */

#include <stdio.h>

#define MAX_CODE 255

int main() {
    int c;
    int freqs[MAX_CODE + 1];
    for (int i = 0; i <= MAX_CODE; i++) {
        freqs[i] = 0;
    }

    while ((c = getchar()) != EOF) {
        freqs[c]++;
    }

    for (int i = 0; i <= MAX_CODE; i++) {
        printf("%d\t|", i);
        for (int j = 0; j < freqs[i]; j++) {
            printf("X");
        }
        printf("\n");
    }
    return 0;
}

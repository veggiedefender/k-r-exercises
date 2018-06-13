/* Write a program that prints its input one word per line. */

#include <stdio.h>

#define IN       1
#define OUT      0
#define LONGEST  9

int main() {
    int c, state, length;
    int lengths[LONGEST + 1];
    length = 0;
    state = OUT;
    for (int i = 0; i <= LONGEST; i++) {
        lengths[i] = 0;
    }

    while ((c = getchar()) != EOF) {
        if (c == '\n' || c == ' ' || c == '\t') {
            if (length > LONGEST) {
                length = LONGEST;
            }
            lengths[length]++;
            length = 0;
            state = OUT;
        } else {
            length++;
            state = IN;
        }
    }

    for (int i = 0; i <= LONGEST; i++) {
        printf("%d | ", i);
        for (int j = 0; j < lengths[i]; j++) {
            printf("X");
        }
        printf("\n");
    }
    return 0;
}

/* Write a program to copy its input to its output, replacing each string of one
or more blanks by a single blank. */

#include <stdio.h>

main() {
    int c;
    int inspaces = 0;
    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            if (!inspaces) {
                putchar(' ');
                inspaces = 1;
            }
        } else {
            putchar(c);
            inspaces = 0;
        }
    }
}

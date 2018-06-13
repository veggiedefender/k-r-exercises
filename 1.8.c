/* Write a program to count blanks, tabs, and newlines. */

#include <stdio.h>

int main() {
    int c, blanks, tabs, newlines;
    blanks = tabs = newlines = 0;
    while ((c = getchar()) != EOF) {
        switch (c) {
            case ' ':
                blanks++;
                break;
            case '\t':
                tabs++;
                break;
            case '\n':
                newlines++;
                break;
        }
    }
    printf("blanks: %d\n", blanks);
    printf("tabs: %d\n", tabs);
    printf("newlines: %d\n", newlines);
    return 0;
}

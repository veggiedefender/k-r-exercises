/* Verify that the expression getchar() != EOF is 0 or 1. */

#include <stdio.h>

main() {
    printf("(getchar() != EOF) == %d\n", getchar() != EOF);
}

/* Experiment to find out what happens when printf's string contains \c, where c
is some character not listed above. */

#include <stdio.h>

int main() {
    printf("this is\roverwritten.\n");
    return 0;
}

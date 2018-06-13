/* Experiment to find out what happens when printf's string contains \c, where c
is some character not listed above. */

#include <stdio.h>

main() {
    printf("this is\roverwritten.\n");
}

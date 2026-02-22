#include <stdio.h>

int main(void) {
    int i = 0;

    for (i=0; i<5; i++) {
        printf("I am saying \"hello world\" for the %d time\n", i+1);
    }

    printf("Finally, my first file in the repo is complete!\n");

    return 0;
}
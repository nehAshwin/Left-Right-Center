#include <stdio.h>
#include <stdlib.h>

#define SEED 4823

int main(void) {
    for (int i = 0; i < 3; i += 1) {
        printf("Set the random seed to %d.\n", SEED);
        srandom(SEED);
        for (int j = 0; j < 5; j += 1) {
            int val = random();
            printf(" - generated %d\n", val);
            printf("mod 5:%d\n", val % 5);
        }
    }
    return 0;
}


#include <stdio.h>
#include "mark_sweep/mark_sweep.h"
int main() {
    printf("gc !\n");
    malloc_t(1);
    return 0;
}

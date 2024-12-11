#include "mem.h"
#include <stdlib.h>

void nfree(void * * const ptr) {
    free(*ptr);
    *ptr = NULL;
}

#ifndef __RINSTD__MEM_H_WsutQ8eS
#define __RINSTD__MEM_H_WsutQ8eS

// TODO: Which one is better?

#define mfree(ptr) do { \
        free(ptr); \
        ptr = NULL; \
    } while (0)

void nfree(void * * const ptr);

#endif

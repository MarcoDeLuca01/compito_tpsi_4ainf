#include "pow.h"
#include <stdio.h>

#ifdef DEBUG
#include "trace.h"
#endif

int potenza(int base, int esponente) {
    #ifdef DEBUG
    TRACE();
    #endif
    int risultato = 1;
    for (int i = 0; i < esponente; i++) {
        risultato *= base;
    }
    return risultato;
}

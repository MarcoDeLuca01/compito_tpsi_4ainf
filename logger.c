#include "logger.h"
#include <stdio.h>

extern int operando1_[BUF];
extern int operando2_[BUF];
extern int risultato_[BUF];
extern char operazione_[BUF];

void logger(int iterazioni) {
    for (int i = 0; i < iterazioni; i++) {
        printf("Operazione: %c, Operando1: %d, Operando2: %d, Risultato: %d\n", 
            operazione_[i], operando1_[i], operando2_[i], risultato_[i]);
    }
}

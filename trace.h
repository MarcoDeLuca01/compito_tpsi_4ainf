#ifdef DEBUG
#include <stdio.h>

#define TRACE() \
    printf("File: %s, Line: %d, Function: %s\n", __FILE__, __LINE__, __func__);

#else
#define TRACE()
#endif

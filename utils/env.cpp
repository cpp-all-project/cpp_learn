#include <cstdio>
#include "env.h"

void debug_print() {
#ifdef DEBUG
    printf("debug 开启");
#endif
    printf("debug 关闭");
}


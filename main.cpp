#include <iostream>
#include "tty.h"
#include "env.h"

int main() {
    windows_tty_utf8();
    debug_print();
    std::cout << "你好 世界" << std::endl;
    return 0;
}

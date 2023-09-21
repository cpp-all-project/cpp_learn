#include <iostream>
#include "tty.h"
#include "env.h"
#include "read_config.h"

int main() {
    read_toml();
    read_json();

    windows_tty_utf8();
    debug_print();

    std::cout << "你好 世界" << std::endl;
    return 0;
}

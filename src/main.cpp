#include <iostream>
#include "tty.h"
#include "env.h"
#include "read_config.h"

int main()
{
    // 防止终端一闪而过
    system("pause");

    read_toml();
    read_json();

    windows_tty_utf8();
    debug_print();

    std::cout << "你好 世界" << std::endl;
    return 0;
}

#include <iostream>
#include "tty.h"
#include "env.h"
#include "json.hpp"

using json = nlohmann::json;

int main() {
    json ex1 = json::parse(R"(
      {
        "pi": 3.141,
        "happy": true
      }
    )");
    std::cout << ex1.dump() << std::endl;

    windows_tty_utf8();
    debug_print();
    std::cout << "你好 世界" << std::endl;
    return 0;
}

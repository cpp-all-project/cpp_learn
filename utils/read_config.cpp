#include <iostream>
#include "read_config.h"
#include "../lib/toml++/toml.hpp"
#include "../lib/nlohmann/json.hpp"

using json = nlohmann::json;

void read_toml(){
    std::cout << "Current working directory: " << std::filesystem::current_path() << std::endl;

    // 解析配置文件
    auto config = toml::parse_file( "../config/project.toml" );
    // 读取配置项
    std::string_view  host = config["server"]["host"].value_or("");
    int port = config["server"]["port"].value_or(0);
    std::string_view  username = config["database"]["username"].value_or("");
    std::string_view  password = config["database"]["password"].value_or("");

    // 打印配置项
    std::cout << "Server: " << host << ":" << port << std::endl;
    std::cout << "Database: " << username << "/" << password << std::endl;
    std::cout << ""<< std::endl;
}

void read_json(){
    json ex1 = json::parse(R"(
      {
        "pi": 3.141,
        "happy": true
      }
    )");
    std::cout << ex1.dump() << std::endl;
    std::cout << ""<< std::endl;
}
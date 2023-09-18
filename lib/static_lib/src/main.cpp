#include <iostream>
#include <windows.h>
#include <chrono>
#include <iomanip>
#include <thread>


int main() {
    // SetConsoleOutputCP 函数所在库函数，让 cmd 程序的编码更为 utf-8
    SetConsoleOutputCP(65001);

    std::cout << "你好，世界！" << std::endl;
    // 获取当前系统时间

    //    auto start = std::chrono::system_clock::now();
    //    int count = 0; // 记录执行的次数
    //
    //    while (true) {
    //        auto now = std::chrono::system_clock::now();
    //
    //        // 将当前时间转换为time_t类型
    //        std::time_t current_time = std::chrono::system_clock::to_time_t(now);
    //
    //        // 获取毫秒值
    //        auto ms = std::chrono::duration_cast<std::chrono::milliseconds>(now.time_since_epoch()) % 1000;
    //        // 使用put_time函数以指定的格式输出时间
    //        std::cout << std::put_time(std::localtime(&current_time), "%Y-%m-%d %H:%M:%S") << "." << std::setfill('0')
    //                  << std::setw(3) << ms.count() << std::endl;
    //        count++;
    //
    //
    //        // 暂停 1 秒钟
    //        // std::this_thread::sleep_for(std::chrono::seconds(1));
    //
    //        auto end = std::chrono::system_clock::now();
    //        std::chrono::duration<double> elapsed_seconds = end - start;
    //
    //        if (elapsed_seconds.count() >= 1.0) {
    //            // 一秒钟已经过去，执行函数
    //            break;
    //        }
    //    }


    return 0;
}

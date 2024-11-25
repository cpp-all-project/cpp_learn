#include "tty.h"

#ifdef _WIN32
#include <Windows.h>
#endif

// 或者使用 system("chcp 65001") 来设置控制台输出为 UTF-8,但是多多打印一个字符串日志
void windows_tty_utf8()
{
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif
}

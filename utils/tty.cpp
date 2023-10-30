#include "tty.h"

#ifdef _WIN32
#include <Windows.h>
#endif

void windows_tty_utf8()
{
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif
}

## 引入依赖
https://blog.csdn.net/whl0071/article/details/123876364

## cmake
下载地址: https://cmake.org/download/
cmake 命令行指定变量：
```shell
# -D 指定变量名
cmake ./CMakeLists.txt -D变量名=值
```


## 编译命令
std: 指定 c++ 版本
-o 输出可执行文件名称
```shell
g++ *.cpp -std=c++17 -o app.exe
```
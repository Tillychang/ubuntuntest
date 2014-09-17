#include <iostream>
#include <string>
#include <vector>
using namespace std;


//如何利用宏函数
//优点： 
//  1. 编译期前展开，不调用函数，节省开销
//缺点 ：
//  1. 不过不被调用，就无法发现错误
//

#define ERR_EXIT(m) \
    do { \
        perror(m);\
        exit(EXIT_FAILURE);\
    }while(0)


//内联函数：
//1. 可以看做更高级的的宏函数
//2、 编译期间被内联展开
//3. 没用函数调用开销
//4. 编译器可以检测出内联函数的错误

inline void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}



int main(int argc, const char *argv[])
{
    
    return 0;
}

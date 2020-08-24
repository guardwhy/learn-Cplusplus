#include <iostream>
/**
 * 创建命名空间
 * @return
 */
 namespace A{
     // 定义变量
     int a = 10;
 }

 namespace B{
     // 定义变量
     int a = 20;
 }
int main()
{
    std::cout << "A::a : " << A::a << std::endl;
    std::cout << "B::a : " << B::a << std::endl;
    return 0;
}

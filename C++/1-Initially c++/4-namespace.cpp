#include <iostream>
/**
 * 使用命名空间
 */
using namespace std;

// 创建命名空间stu
namespace stu
{
    void sort()
    {
        cout << "stu" << std::endl;
    }
}
// 使用命名空间stu
using namespace stu;

// 创建命名空间stu1
namespace stu1
{
    void sort()
    {
        std::cout << "stu1" << std::endl;
    }
}
// 使用命名空间stu1
using namespace stu1;

int main()
{
    stu::sort();
    stu1::sort();

    cout << "kobe is mvp" <<endl;

    return 0;
}

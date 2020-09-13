#include <iostream>
#include <string.h>
using namespace std;

// 仿函数
class MyPrint{
public:
    void operator()(string test){
        cout << test << endl;
    }
};

int main()
{   
    // 定义反函数
    MyPrint mp;
    mp("guardwhy");
    return 0;
}

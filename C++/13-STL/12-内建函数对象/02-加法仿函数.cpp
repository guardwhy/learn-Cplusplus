#include <iostream>
using namespace std;
#include <functional> //内建函数对象头文件
#include <vector>
#include <algorithm>
/**
 *template<class T> T plus<T>//加法仿函数
 * @return
*/
int main() {
    plus<int> p;
    // 输出结果
    cout <<"加法仿函数:"<< p(1,2) << endl;
    return 0;
}
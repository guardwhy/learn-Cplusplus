#include <iostream>
using namespace std;
#include <functional> //内建函数对象头文件
#include <vector>
#include <algorithm>
/**
 *template<class T> T negate<T>取反仿函数
 * @return
*/
int main() {
    negate<int> n;
    // 输出结果
    cout <<"反仿函数:"<< n(10) << endl;
    return 0;
}
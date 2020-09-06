#include <iostream>
using namespace std;
/**
 *重新解释转换:reinterpret_cast
 * @return
*/
int main() {
    // 定义变量
    int a = 100;
    // 重新转换
    int *p = reinterpret_cast<int*>(a);
    cout << "p的值" << p<< endl;
    return 0;
}
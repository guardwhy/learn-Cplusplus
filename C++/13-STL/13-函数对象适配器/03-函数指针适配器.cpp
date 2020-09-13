#include <iostream>
#include <functional>
#include <vector>
#include <algorithm>
using namespace std;
/**
 * 函数指针适配器
 * @return
*/
void disPrint(int val, int start){
    // 输出结果
    cout << val + start << " ";
}
int main() {
    // 定义vector容器
    vector<int> v1;
    // 插入数据
    for(int i=0; i<10; i++){
        v1.push_back(i);
    }
    cout << "请输入起始累加值:" << endl;
    // 定义变量
    int start;
    cin>> start;
    // 指针函数
    cout << "输出容器元素:";
    for_each(v1.begin(), v1.end(), bind2nd(ptr_fun(disPrint), start));
    return 0;
}
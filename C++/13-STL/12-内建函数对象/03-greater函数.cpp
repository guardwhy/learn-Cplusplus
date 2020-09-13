#include <iostream>
using namespace std;
#include <functional>
#include <vector>
#include <algorithm>
/**
 * 大于仿函数  greater<T>
 * @return
*/
class MyPrint{
public:
    void operator()(int val){
        cout << val << " ";
    }
};

int main() {
    // 定义vector容器
    vector<int> v1;
    // 插入数据
    for(int i=0; i<10; i++){
        v1.push_back(i);
    }
    // 输出容器元素
    cout << "容器元素(升序):";
    for_each(v1.begin(), v1.end(), MyPrint());
    cout << endl;

    // 降序操作
    cout << "容器元素(降序):";
    sort(v1.begin(), v1.end(), greater<int>());
    for_each(v1.begin(), v1.end(), MyPrint());
    cout << endl;
    return 0;
}
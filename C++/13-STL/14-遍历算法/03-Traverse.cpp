#include <iostream>
#include <functional>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
/**
 * for_each绑定参数遍历
 * @return
*/
class MyPrint2: public binary_function<int,int,void>{
public:
    void operator()(int val, int start)const {
        // 输出结果
        cout << val + start << " ";
    }
};

int main() {
    // 定义vector容器
    vector<int> v1;
    for(int i=0; i < 5; i++){
        // 插入元素
        v1.push_back(i);
    }
    // 遍历容器
    cout << "容器元素:";
    for_each(v1.begin(), v1.end(), bind2nd(MyPrint2(), 100));
    return 0;
}
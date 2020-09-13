#include <iostream>
#include <functional>
#include <vector>
#include <algorithm>
using namespace std;
/**
 * 函数对象适配器
 * @return
*/
class MyPrint: public binary_function<int, int, void>{
public:
    void operator()(int num, int start) const {
        // 输出结果
        cout << "num=" << num << ", start=" << start << ", sum=" << num + start << endl;
    }
};

int main() {
    // 定义vector容器
    vector<int> v1;
    // 插入数据
    for(int i=0; i<3; i++){
        v1.push_back(i);
    }
    cout<< "请输入起始累加值:" << endl;
    // 定义变量
    int start;
    cin >> start;
    // 遍历容器
    for_each(v1.begin(), v1.end(), bind2nd(MyPrint(), start));
    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;
/**
 * copy算法:将容器内指定范围的元素拷贝到另一容器中.
 * @return
*/
void copyFunction01(){
    // 定义vector容器v1
    vector<int> v1;
    //for_each基本使用
    for(int i=0; i < 10; i++){
        // 插入元素
        v1.push_back(i);
    }

    // 定义vector容器v2
    vector<int> v2;
    v2.resize(v1.size());
    // 赋值操作
    copy(v1.begin(), v1.end(), v2.begin());
    cout << "输出v2容器的元素:";
    // for_each(v2.begin(), v2.end(), [](int val){cout << val << " ";});
    // cout << endl;   // 输出v2容器的元素:0 1 2 3 4 5 6 7 8 9

    copy(v1.begin(), v1.end(), ostream_iterator<int>(cout, " "));
    cout << endl;
}


int main() {
    // 调用函数
    copyFunction01();
    return 0;
}
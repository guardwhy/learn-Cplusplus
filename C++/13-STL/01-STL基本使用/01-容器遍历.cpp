#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
/**
 * 迭代器遍历
 * @return
*/

// 声明函数
void display(int val){
    cout << val << " ";
}
int main() {
    // 定义容器
    vector<int> v;
    // 插入数据
    v.push_back(3);
    v.push_back(5);
    v.push_back(9);
    v.push_back(10);

    /**
     * 方式1:利用迭代器遍历容器中的数据
     * @return
     */
    // 起始迭代器,指向容器中第一个元素的地址
    vector<int>::iterator itBegin = v.begin();
    // 结束迭代器:指向容器中最后一个元素的下一个位置的地址
    vector<int>::iterator itEnd = v.end();

    // 条件判断
    cout << "vector容器元素:";
    while (itBegin != itEnd){
        cout << *itBegin << " ";
        itBegin++;
    }
    cout << endl;

    /**
     * 方式二:
     * @return
     */
    cout << "vector容器元素:";
    for(vector<int>::iterator it = v.begin(); it != v.end(); it++){
        cout << *it << " ";
    }
    cout << endl;
    /**
     * 方式三:
     * @return
     */
    cout << "vector容器元素:";
    for_each(v.begin(), v.end(), display);
    cout << endl;
    return 0;
}
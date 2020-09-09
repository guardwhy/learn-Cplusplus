#include <iostream>
#include <deque>
using namespace std;
/**
 * deque构造函数
 * @return
*/

// 声明打印容器函数
void printDeque(const deque<int>&d) {

    for(deque<int>::const_iterator it = d.begin(); it != d.end(); it++){
        // const_iterator:只读迭代器
        cout << *it << " ";
    }
    cout << endl;
}

int main() {
    // 定义d容器
    deque<int> d;
    // 插入元素
    d.push_back(10);
    d.push_back(2);
    d.push_back(12);
    d.push_back(16);
    // 输出容器元素
    cout << "deque1容器元素:";
    printDeque(d);  // deque1容器元素:10 2 12 16 

    // 定义d2容器
    deque<int> d2;
    // 赋值操作
    d2.assign(d.begin(), d.end());
    cout << "deque2容器元素:";
    // 调用函数
    printDeque(d2); // deque2容器元素:10 2 12 16

    // 条件判断
    if(d2.empty()){
        // 输出结果
        cout << "d2容器为空" << endl;
    } else{
        cout << "d2的容器大小:";
        cout << d2.size() << endl;  // 2的容器大小:4
    }

    return 0;
}


#include <iostream>
#include <deque>
using namespace std;
/**
 * deque双端插入和删除操作
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
    /*
    deque双端插入和删除操作:
    push_back(elem);//在容器尾部添加一个数据
    push_front(elem);//在容器头部插入一个数据
    pop_back();//删除容器最后一个数据
    pop_front();//删除容器第一个数据

    deque数据存取:
    at(idx);//返回索引idx所指的数据，如果idx越界，抛出out_of_range。
    operator[];//返回索引idx所指的数据，如果idx越界，不抛出异常，直接出错。
    front();//返回第一个数据。
    back();//返回最后一个数据
    */
    // 定义容器d
    deque<int> d;
    // 容器尾部添加数据
    d.push_back(10);
    d.push_back(20);
    d.push_back(30);
    // 容器头部添加数据
    d.push_front(56);
    d.push_front(66);
    d.push_front(89);

    // 调用函数
    cout << "deque容器元素:";
    printDeque(d);  // deque容器元素:89 66 56 10 20 30

    // 容器尾部删除元素
    d.pop_back();
    cout << "deque容器元素:";
    printDeque(d);  // deque容器元素:89 66 56 10 20

    // 容器头部删除元素
    d.pop_front();
    cout << "deque容器元素:";
    printDeque(d);  // deque容器元素:66 56 10 20
    // 输出结果
    cout << "容器第一个元素是:" << d.front() << endl;   // 容器第一个元素是:66
    cout << "容器最后一个元素是:" << d.back() << endl;  // 容器最后一个元素是:20
    return 0;
}
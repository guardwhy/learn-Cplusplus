#include <iostream>
#include<queue>
using namespace std;
/**
 * deque插入和删除操作
 * @return
*/
// 输出元素
void printDeque(const deque<int>&d) {
    for(deque<int>::const_iterator it = d.begin(); it != d.end(); it++){
        // const_iterator:只读迭代器
        cout << *it << " ";
    }
    cout << endl;
}

int main() {
    /*
     deque插入操作
        insert(pos,elem);//在pos位置插入一个elem元素的拷贝，返回新数据的位置。
        insert(pos,n,elem);//在pos位置插入n个elem数据，无返回值。
        insert(pos,beg,end);//在pos位置插入[beg,end)区间的数据，无返回值。
     deque删除操作
        clear();//移除容器的所有数据
        erase(beg,end);//删除[beg,end)区间的数据，返回下一个数据的位置。
        erase(pos);//删除pos位置的数据，返回下一个数据的位置。
    */

    // 创建deque对象d1
    deque<int> d1;
    // 插入操作
    d1.push_back(1);
    d1.push_back(3);
    d1.push_back(7);
    d1.push_back(10);
    d1.push_back(12);
    cout << "deque容器元素:";
    printDeque(d1);     // vector容器元素:1 3 7 10 12

    // 在pos位置插入元素
    d1.insert(++d1.begin(), 30);
    // 调用函数
    cout << "deque容器元素:";
    printDeque(d1); // vector容器元素:1 30 3 7 10 12

    // 创建deque对象d2
    deque<int> d2;
    // 插入数据
    d2.push_back(3);
    d2.push_back(6);
    // pos指定位置插入数据
    d1.insert(d1.begin(), d2.begin(), d2.end());
    // 调用函数
    cout << "deque容器元素:";
    printDeque(d1); // vector容器元素:3 6 1 30 3 7 10 12

    // 删除操作
    deque<int>::iterator itBegin = d1.begin();
    deque<int>::iterator itEnd = d1.begin();
    itEnd = itEnd + 4;
    // 删除函数
    d1.erase(itBegin, itEnd);
    cout << "deque容器(删除)元素:";
    printDeque(d1); // vector容器(删除)元素:3 7 10 12

    // 清空容器
    d1.clear();
    cout << "deque容器(清空)元素:";
    printDeque(d1);
    return 0;
}
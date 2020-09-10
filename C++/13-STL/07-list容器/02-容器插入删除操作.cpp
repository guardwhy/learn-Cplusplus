#include <iostream>
#include <list>
#include <string>
using namespace std;
/**
 * list数据元素插入和删除操作
 * @return
*/

// 声明函数
void printList(const list<int> &L){
    for(list<int>::const_iterator it = L.begin(); it != L.end(); it++){
        cout << *it << " ";
    }
    cout << endl;
}

int main() {
    /*
        push_back(elem);//在容器尾部加入一个元素
        pop_back();//删除容器中最后一个元素
        push_front(elem);//在容器开头插入一个元素
        pop_front();//从容器开头移除第一个元素
        insert(pos,elem);//在pos位置插elem元素的拷贝，返回新数据的位置。
        insert(pos,n,elem);//在pos位置插入n个elem数据，无返回值。
        insert(pos,beg,end);//在pos位置插入[beg,end)区间的数据，无返回值。
        clear();//移除容器的所有数据
        erase(beg,end);//删除[beg,end)区间的数据，返回下一个数据的位置。
        erase(pos);//删除pos位置的数据，返回下一个数据的位置。
        remove(elem);//删除容器中所有与elem值匹配的元素。
    */
    // 定义L容器
    list<int> L1(5, 10);
    // 调用函数
    cout << "容器元素:";
    printList(L1);  // 容器元素:10 10 10 10 10

    // 创建L2容器
    list<int> L2;
    // 容器尾部加入一个元素
    L2.push_back(10);
    L2.push_back(20);
    L2.push_back(30);
    // 在容器开头插入一个元素
    L2.push_front(11);
    L2.push_front(21);
    L2.push_front(31);
    // 调用函数
    cout << "容器元素:";
    printList(L2);  // 容器元素:31 21 11 10 20 30

    // 删除容器中最后一个元素
    L2.pop_back();
    //从容器开头移除第一个元素
    L2.pop_front();
    // 调用函数
    cout << "容器元素(删除操作):";
    printList(L2);  // 容器元素(删除操作):21 11 10 20

    // 在pos位置插elem元素的拷贝，返回新数据的位置
    L2.insert(L2.begin(), 100);
    // 调用函数
    cout << "容器元素(插入操作):";
    printList(L2);  // 容器元素(插入操作):100 21 11 10 20

    // 删除操作
    L2.erase(L2.begin());
    // 调用函数
    cout << "容器元素(erase操作):";
    printList(L2);  // 容器元素(erase操作):21 11 10 20

    // remove:删除容器中所有与elem值匹配的元素。
    L2.push_front(100);
    L2.push_back(100);
    // 删除所有100的元素
    L2.remove(100);
    // 调用函数
    cout << "容器元素(remove操作):";
    printList(L2);  // 容器元素(remove操作):21 11 10 20

    // 清空容器
    L2.clear();
    // 调用函数
    cout << "容器元素(清空操作):";
    printList(L2);  // 容器元素(清空操作):
    return 0;
}
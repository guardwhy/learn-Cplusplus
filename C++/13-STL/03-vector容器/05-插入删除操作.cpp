#include <iostream>
#include <vector>
#include <string>
using namespace std;
/**
 * vector插入和删除操作
 * @return
*/

// 声明函数
void printVector(vector<int> &v){
    // 遍历操作
    for(vector<int>::iterator it = v.begin(); it!= v.end(); it++){
        // 输出结果
        cout << *it << " ";
    }
    cout << endl;
}

int main() {
    /*
    insert(const_iterator pos, int count,ele);//迭代器指向位置pos插入count个元素ele.
    push_back(ele); //尾部插入元素ele
    pop_back();//删除最后一个元素
    erase(const_iterator start, const_iterator end);//删除迭代器从start到end之间的元素
    erase(const_iterator pos);//删除迭代器指向的元素
    clear();//删除容器中所有元素
    */
    
    // 定义数组
    int arr[] = {2, 3, 4, 1, 9};
    vector<int> v1(arr, arr+sizeof(arr) / sizeof(int));

    // 插入元素
    v1.insert(v1.begin(), 10);
    v1.insert(v1.begin(), 2, 15);
    v1.insert(v1.begin(), 10);
    cout << "vector容器插入元素:";
    printVector(v1);    // vector容器插入元素:10 15 15 10 2 3 4 1 9

    // 尾部插入元素
    v1.push_back(33);
    cout << "vector容器尾部插入元素:";
    printVector(v1);    // vector容器尾部插入元素:10 15 15 10 2 3 4 1 9 33

    // 删除最后一个元素
    v1.pop_back();
    cout << "vector容器删除最后一个元素:";
    printVector(v1);    // vector容器删除最后一个元素:10 15 15 10 2 3 4 1 9

    // 删除迭代器指向元素
    v1.erase(v1.begin());
    cout << "vector容器删除迭代器起始的元素:";
    printVector(v1);    // vector容器删除迭代器起始的元素:15 15 10 2 3 4 1 9

    // 清空容器元素
    v1.clear();
    cout << "vector容器清空元素:";
    printVector(v1);    // vector容器清空元素:
    return 0;
}
#include <iostream>
#include <vector>
using namespace std;
/*
vector常用赋值操作：
    assign(beg, end);//将[beg, end)区间中的数据拷贝赋值给本身。
    assign(n, elem);//将n个elem拷贝赋值给本身。
    vector& operator=(const vector  &vec);//重载等号操作符
    swap(vec);// 将vec与本身的元素互换。
*/
void printVector(vector<int> &v){
    // 遍历操作
    for(vector<int>::iterator it = v.begin(); it!= v.end(); it++){
        // 输出结果
        cout << *it << " ";
    }
    cout << endl;
}

int main()
{
    // 定义数组
    int arr[] = {2, 3, 4, 1, 9};
    vector<int> v1(arr, arr+sizeof(arr) / sizeof(int));

    vector<int> v2;
    // 赋值操作
    v2 = v1;
    // 输出数组
    cout << "v2容器的元素:";
    printVector(v2);    // v2容器的元素:2 3 4 1 9

    // 赋值操作
    vector<int> v3;
    v3.assign(v2.begin(), v2.end());
    // 调用函数
    cout << "v3容器的元素:";
    printVector(v3);    // 3容器的元素:2 3 4 1 9 

    vector<int> v4(5, 3);
    // 调用函数
    cout << "v4容器的元素:";
    printVector(v4);    // v4容器的元素:3 3 3 3 3

    // 元素互换
    cout << "容器v3和v4互换:" << endl;
    // 调用互换函数
    v3.swap(v4);
    cout << "v3容器的元素:";
    printVector(v3);
    cout << "v4容器的元素:";
    printVector(v4); 
    
    return 0;
}

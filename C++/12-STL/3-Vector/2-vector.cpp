#include <iostream>
#include <vector>

using namespace std;

// 函数
void printVector(vector<int>&v){
    // 遍历
    for(vector<int>:: iterator it = v.begin(); it != v.end(); it++){
        cout << *it << " ";
    }
    cout << endl;
}

/**
 * 赋值操作
 * @return
 * vector常用赋值操作
    assign(beg, end);//将[beg, end)区间中的数据拷贝赋值给本身。
    assign(n, elem);//将n个elem拷贝赋值给本身。
    vector& operator=(const vector  &vec);//重载等号操作符
    swap(vec);// 将vec与本身的元素互换。
 */
//声明函数
void test01(){
    // 定义数组,创建对象v1
    int arr[] = {1,2,3,4,5,6};
    cout << "v1的值:" << endl;
    vector<int> v1(arr, arr+sizeof(arr) / sizeof(int));

    // 创建对象v2
    vector<int> v2;
    // 赋值
    v2 = v1;
    cout << "v2的值:" << endl;
    printVector(v2);

    // 创建对象v3
    vector<int> v3;
    v3.assign(v2.begin(), v2.end());
    cout << "v3的值:" << endl;
    printVector(v3);

    // 创建对象v4
    vector<int> v4(10, 100);
    cout << "v4的值:" << endl;
    printVector(v4);

    cout << "v3和v4互换后: " << endl;
    v3.swap(v4);
    printVector(v3);
    printVector(v4);
}
int main() {
    // 调用函数
    test01();
    return 0;
}
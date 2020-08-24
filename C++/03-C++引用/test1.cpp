#include <iostream>
/**
 * 基本引用语法
 */
using namespace std;

// 1.基本语法,
//语法  数据类型  & 别名 = 原名
void test01(){
    // 定义变量
    int a = 10;
    int &b = a;

    b = 100;
    // 输出a , b的值
    cout <<"a=" << a << endl;
    cout <<"b=" << b << endl;
}

// 数组引用
void test02(){
    // 定义数组
    int arr[5] = {1, 2,3,4,5};

    // 1.直接建立引用
    int(&pArr)[5] = arr;
    // 遍历数组
    /*
        for (int i = 0; i < 5; ++i) {
            cout << pArr[i] << endl;
        }
    */

    // 2.先定义数组类型,再通过类型。
    typedef int(array_type)[5];
    // 数据类型 &别名 = 原名
    array_type  & pArr2 = arr;
    // 遍历数组
   /* for (int i = 0; i < 5; ++i) {
        cout << pArr2[i] << endl;
    }*/

   // 3.先定义数组引用类型，再通过类型定义引用
    typedef int(&array_type1)[5];
    array_type1 pArr3 = arr;
    // 遍历数组
    for (int i = 0; i < 5; ++i) {
        // 输出数组元素
        cout << pArr3[i] << endl;
    }
}
int main() {
    // 调用函数
    //test01();
    test02();
    return 0;
}
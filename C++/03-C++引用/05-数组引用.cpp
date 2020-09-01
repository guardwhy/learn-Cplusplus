#include <iostream>
using namespace std;
/**
 * 数组引用
 * @return
*/

// 数组引用
void ArrayReference01(){
    // 定义数组
    int array[5] = {3, 4, 6, 7, 9};
    // 直接建立引用
    int(&arr)[5] = array;
    // 遍历循环
    cout << "数组元素1:";
    for(int i=0; i<5; i++){
        cout<< arr[i]<< " ";
    }
}

// 先定义数组类型,再通过类型定义数组的引用
void ArrayReference02(){
    // 定义数组
    int array[5] = {3, 4, 6, 7, 9};
    // 定义数组类型
    typedef int(ARRAY_TYPE)[5];
    // 定义数组的引用
    ARRAY_TYPE &pArr = array;
    // 遍历数组
    cout << "\n数组元素2:";
    for(int i=0; i < 5; i++){
        cout << pArr[i]<< " ";
    }

}

// 先定义数组引用类型，再通过类型定义引用
void ArrayReference03(){
    // 定义数组
    int array[5] = {2, 4, 7, 5, 11};
    // 先定义数组引用类型
    typedef int (&ARRAY_TYPE_REF)[5];
    // 类型定义引用
    ARRAY_TYPE_REF pArr = array;
    // 遍历数组
    cout << "\n数组元素3:";
    for(int i=0; i<5; i++){
        cout << pArr[i]<< " ";
    }
}

int main() {
    // 调用函数
    ArrayReference01();
    ArrayReference02();
    ArrayReference03();
    return 0;
}
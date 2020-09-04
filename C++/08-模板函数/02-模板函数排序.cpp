#include <iostream>
using namespace std;
/**
 * 模板函数排序
 * @return
*/
// 声明交换函数
template<class T1>
void SwapFunction(T1 &a, T1&b){
    T1 temp = a;
    a = b;
    b = temp;
}

// 排序函数
template <class T>
void SortFunction(T arr[], int len){
    for(int i=0; i<len; i++){
        // 设定最大值
        int max = i;
        for(int j = i+1; j<len; j++){
            if(arr[max] < arr[j]){
                // 更新最大值下标
                max = j;
            }
        }

        // 判断值
        if(i != max){
            // 调用交换函数
            SwapFunction(arr[i], arr[max]);
        }
    }
}

// 输出数组函数
template <class T>
void disPlay(T arr[], int len){
    // 循环输出
    cout << "数组排序后:";
    for(int i=0; i < len; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    // 定义数组
    char charArray[] = {'a','b','r','o','u'};
    // 长度大小
    int len = sizeof(charArray)/sizeof(char);
    // 字符数组排序前
    cout <<"字符数组排序前:";
    for(int i=0; i<len; i++){
        cout << charArray[i] << " ";
    }
    cout << endl;
    // 调用排序函数
    SortFunction(charArray, len);
    // 调用输出函数
    disPlay(charArray, len);

    // 定义整型数组
    int intArray[] = { 1, 5, 3, 2, 4 };
    // 长度大小
    len = sizeof(intArray) / sizeof(int);
    cout <<"整型数组排序前:";
    for(int j=0; j<len; j++){
        cout << intArray[j] << " ";
    }
    cout << endl;
    // 调用排序函数
    SortFunction(intArray, len);
    // 调用输出函数
    disPlay(intArray, len);
    return 0;
}
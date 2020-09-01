#include <iostream>
using namespace std;
/**
 * 引用作为函数参数
 * @return
 */
 // 声明函数
 void swap1(int a, int b);
 void swap2(int *p1, int *p2);
 void swap3(int &r1, int &r2);

int main() {
    // 定义变量
    int num1,num2;
    cout << "请输入两个整数:"<< endl;
    cin >> num1 >> num2;
    // 调用函数
    swap1(num1, num2);
    // 输出整数
    cout << "交换后:"<< num1 << ", "<< num2 << endl;

    cout << "请输入两个整数:"<< endl;
    cin >> num1 >> num2;
    // 调用函数
    swap2(&num1, &num2);
    // 输出整数
    cout << "交换后:"<< num1 << ", "<< num2 << endl;

    cout << "请输入两个整数:"<< endl;
    cin >> num1 >> num2;
    // 调用函数
    swap3(num1, num2);
    // 输出整数
    cout << "交换后:"<< num1 << ", "<< num2 << endl;
    return 0;
}

// 直接传递内容
void swap1(int a, int b){
    int temp = a;
    a = b;
    b = temp;
}

// 指针传递
void swap2(int *p1, int*p2){
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

// 引用传递
void swap3(int &r1, int &r2){
    int temp = r1;
    r1 = r2;
    r2 = temp;
}
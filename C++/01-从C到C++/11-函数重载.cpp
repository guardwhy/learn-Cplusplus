#include <iostream>
using namespace std;
/**
 * 函数重载
 * @return
 */
// 交换整型变量
void Swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

/**
 * 交换float变量的值
 * @param a
 * @param b
 */
void Swap(float *a, float *b){
    float temp = *a;
    *a = *b;
    *b = temp;
}

/**
 * 交换bool变量的值
 * @param a
 * @param b
 */
void Swap(bool *a, bool *b){
    char temp = *a;
    *a = *b;
    *b = temp;
}
int main() {
    // 交换int变量的值
    int n1 = 10, n2 = 200;
    cout << "交换前:"<< n1 << "," << n2 << endl;
    // 调用函数
    Swap(&n1, &n2);
    // 输出结果
    cout << "交换后:" << n1 << "," << n2 << endl;

    // 交换float变量的值
    float f1 = 10.6, f2 = 20.83;
    cout << "交换前:"<< f1 << "," << f2 << endl;
    // 调用函数
    Swap(&f1, &f2);
    // 输出结果
    cout << "交换后:" << f1 << "," << f2 << endl;

    // 交换float变量的值
    bool b1 = false, b2 = true;
    cout << "交换前:"<< b1 << "," << b2 << endl;
    // 调用函数
    Swap(&b1, &b2);
    // 输出结果
    cout << "交换后:" <<b1 << "," << b2 << endl;
    return 0;
}
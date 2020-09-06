#include <iostream>
using namespace std;
/**
 * 异常抛出
 * @return
*/
// 声明函数
int Function(int a, int b){
    // 条件判断
    if(b == 0){
        // 抛出异常数据
        // throw 1;
        // throw 'a';
        throw string("guardwhy");
    }
    return a / b;
}

// 声明函数
void tryFunction(){
    // 定义变量
    int a = 10;
    int b = 0;
    // 调用函数
    try{
        int ret = Function(a, b);
    } catch (int) {
        cout << "int类型捕获异常" << endl;
    } catch (char) {
        cout << "char类型异常捕获" << endl;
    } catch (...) {
        cout << "其他类型异常捕获" << endl;
    }
}

int main() {
    // 调用函数
    tryFunction();
    return 0;
}
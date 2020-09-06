#include <iostream>
using namespace std;
/**
 * 自定义异常抛出
 * @return
*/
class myException{
public:
    void printError(){
        cout << "打印自定义异常"<< endl;
    }
};

// 声明函数
int Function(int a, int b){
    // 条件判断
    if(b == 0){
        // 抛出异常数据
        throw myException();
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
    }  catch (myException e) {
        e.printError();
    }
    catch (...) {
        cout << "其他类型异常捕获" << endl;
    }
}

int main() {
    // 调用函数
    tryFunction();
    return 0;
}
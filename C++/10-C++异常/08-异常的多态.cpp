#include <iostream>
using namespace std;
/**
 * 异常的多态
 * @return
*/
// 异常的基类:BaseException
class BaseException{
public:
    // 虚函数
    virtual void printError(){};
};

// 空指针异常
class NULLPointerException: public BaseException{
public:
    // 虚函数重写
    virtual void printError(){
        cout << "空指针异常" << endl;
    }
};

// 越界异常
class OutOfRangeException: public BaseException{
public:
    // 虚函数重写
    virtual void printError(){
        cout << "越界异常" << endl;
    }
};

// 成员函数
void tryFunction(){
    // throw NULLPointerException();
    throw OutOfRangeException();    // 越界异常
}

int main() {
    try {
        tryFunction();
    } catch (BaseException& e) {
        e.printError();
    }
    return 0;
}
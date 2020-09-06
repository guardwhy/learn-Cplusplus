#include <iostream>
using namespace std;
/**
 * 异常变量生命周期
 * @return
*/
class Person{
public:
    // 默认构造
    Person(){
        cout << "Person默认构造函数调用.."<< endl;
    }
    Person(const Person& e){
        cout << "Person拷贝构造函数调用.."<< endl;
    }
    // 析构函数
    ~Person(){
        cout << "Person析构函数的调用.." << endl;
    }
};

// 成员函数
void tryFunction(){
    throw Person();
}

// 测试
void testFunction(){
    try {
        tryFunction();
    } catch (Person& e) {
        cout << "捕获，异常"<< endl;
    }
}

int main(){
    // 调用函数
    testFunction();
    return 0;
}
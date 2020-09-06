#include <iostream>
// 标准异常头文件
#include <stdexcept>
using namespace std;
/**
 * 系统标准异常
 * @return
*/
class Person{
public:
    // 成员变量
    int m_Age;
public:
    Person(int age){
        if(age < 0 || age > 100){
            // 抛出异常
            throw out_of_range("年龄越界,应该在0~100之间");
        }
        this->m_Age = age;
    }
};

int main()
{
    // 捕获异常
    try {
        Person p1(200);
    } catch (exception & e) {
        cout << e.what() << endl;
    }
    return 0;
}

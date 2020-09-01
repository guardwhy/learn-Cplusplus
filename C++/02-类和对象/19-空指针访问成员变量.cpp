#include <iostream>
using namespace std;
/**
 * Null指针访问成员变量
 * @return
*/

// 创建Person类
class Person{
public:
    // 成员变量
    int age;
    //构造方法
    Person(int age){
        this->age = age;
    }
    // 成员函数
    void showPerson(){
        cout << "showPerson函数调用" << endl;
    }

    void showAge(){
        // 条件判断
        if(this == NULL){
            return;
        }
        // 输出年龄
        cout << "showAge函数调用 age=" << age << endl;
    }
};
int main() {
    // 创建对象
    Person *p = NULL;
    p->showPerson();
    p->showAge();
    return 0;
}
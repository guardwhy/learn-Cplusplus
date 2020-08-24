#include <iostream>
#include <cstring>

using namespace std;
// 创建Person类
class Person{
public:
    // 定义成员变量
    char* pName;
    int mAge;

    // 无参构造
    Person(){
        cout << "无参构造函数!" << endl;
        pName = (char*)malloc(strlen("undefined") + 1);
        strcpy(pName, "undefined");
        mAge = 0;
    }
    // 代参构造
    Person(char* name, int age){
        cout << "有参构造函数!" << endl;
        pName = (char*)malloc(strlen(name) + 1);
        strcpy(pName, name);
        mAge = age;
    }
    void ShowPerson(){
        cout << "Name:" << pName << " Age:" << mAge << endl;
    }
    ~Person(){
        cout << "析构函数!" << endl;
        if (pName != NULL){
            delete pName;
            pName = NULL;
        }
    }
};

// 调用函数
void test(){
    // 创建对象
    Person* person1 = new Person;
    Person* person2 = new Person("John",33);

    // 对象调用方法
    person1->ShowPerson();
    person2->ShowPerson();

    // 释放内存
    delete person1;
    delete person2;
}


int main()
{   // 调用函数
    test();
    return 0;
}
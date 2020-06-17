#include <iostream>
#include <cstring>
/**
 * 深拷贝与浅拷贝
 */
using namespace std;

// 创建Person类
class Person{
public:
    // 定义成员变量
    char * myName;
    int myAge;

    // 代参构造
    Person(char * name, int age){
        // 给Person的name,age开辟堆空间
        myName = (char *)malloc(strlen(name) + 1);
        strcpy(myName, name);
        myAge = age;
    }

    //自己提供拷贝构造函数，实现深拷贝
    Person(const Person &p){
        myAge = p.myAge;
        myName = (char *)malloc(strlen(p.myName) + 1);
        // 复制
        strcpy(myName, p.myName);
    }

    // 析构函数
    ~Person(){ // 释放在堆空间开辟的属性
        cout << "Person析构函数被调用" << endl;
        // 条件判断
        if(myName != NULL){
            free(myName);
            myName = NULL;
        }
    }
};

// 声明函数
void test01(){
    Person p1("curry", 10);
    cout << "p1的姓名:" << p1.myName << "年龄:"<<p1.myAge <<endl;

    // 调用拷贝构造函数
    Person p2 = p1; // 初始化p2对象
    cout << "p2的姓名:" << p2.myName << "年龄:" << p2.myAge << endl;
}
int main() {
    cout << "Hello, World!" << endl;
    test01();
    return 0;
}
#include <iostream>
#include <string.h>
using namespace std;
/**
 * 深拷贝与浅拷贝
 * @return
*/
// 创建Person对象
class Person{
public:
    // 成员属性
    char* m_Name;
    int m_Age;
    // 代参构造
    Person(char* name, int age){
        // 给Person开辟对空间
        m_Name = (char*)malloc(strlen(name) + 1);
        // 拷贝复制
        strcpy(m_Name, name);
        m_Age = age;
    }

    // 拷贝构造函数,实现深拷贝
    Person(const Person & p){
        m_Age = p.m_Age;
        m_Name = (char*)malloc(strlen(p.m_Name) + 1);
        // 拷贝复制
        strcpy(m_Name, p.m_Name);
    }

    // 解释在堆区开辟的属性
    ~Person(){
        cout << "Person析构函数被调用" << endl;
        if(m_Name != NULL){
            free(m_Name);
            m_Name = NULL;
        }
    }

};


int main() {
    // 创建对象
    Person pst("Curry", 10);
    cout << "pst的姓名:"<< pst.m_Name << ",年龄:"<< pst.m_Age << endl;
    // 调用拷贝构造函数,初始化pst2对象
    Person pst2 = pst;
    cout << "pst2的姓名:"<< pst2.m_Name << ",年龄:"<< pst2.m_Age << endl;
    return 0;
}
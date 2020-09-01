#include <iostream>
#include <cstring>
using namespace std;
/**
 * 赋值运算符重载
 * @return
*/
// 基类:Person
class Person{
public:
    // 成员变量
    char * m_Name;
public:
    // 构造函数
    Person(){
        cout<< "Person默认构造函数调用" << endl;
    }

    // 代参构造
    Person(const char * name){
        cout << "Person有参构造函数调用..."<< endl;
        this->m_Name = new char[strlen(name) + 1];
        // 复制
        strcpy(this->m_Name, name);
    }

    // 拷贝构造
    Person(const Person & p){
        cout << "Person拷贝构造函数调用..."<< endl;
        // 深拷贝
        this->m_Name = new char[strlen(p.m_Name) + 1];
        strcpy(this->m_Name, p.m_Name);
    }

    // 重载=运算符
    Person& operator=(const Person & p){
        // 先判断堆区是否有数据，如果存在则释放干净
        if(this->m_Name != NULL){
            delete [] this->m_Name;
            this->m_Name = NULL;
        }
        this->m_Name = new char[strlen(p.m_Name)+ 1];
        // 复制操作
        strcpy(this->m_Name, p.m_Name);
        return *this;
    }

    // 析构函数
    ~Person(){
        cout << "Person析构函数调用" << endl;
        if(this->m_Name != NULL){
            delete [] this->m_Name;
            this->m_Name = NULL;
        }
    }
};
// 声明函数
void OperatorTest01(){
    // 创建对象
    Person p1("Stephen");
    Person p2("curry");
    Person p3;
    // 赋值操作
    p3 = p2 = p1;
    cout << "p1的姓名为:" << p1.m_Name << endl;
    cout << "p2的姓名为:" << p2.m_Name << endl;
    cout << "p3的姓名为:" << p3.m_Name << endl;
    Person p4(p3);
}

int main() {
    // 调用函数
    OperatorTest01();
    return 0;
}
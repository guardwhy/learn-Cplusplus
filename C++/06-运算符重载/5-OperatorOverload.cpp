#include <iostream>
#include <cstring>
/**
 赋值运算符重载:编译器会默认给一个类添加4个函数
 构造函数（空实现）  析构函数（空实现） 拷贝构造（值拷贝） operator= (值拷贝)
 */
using namespace std;

// 定义Person类
class Person{
public:
    //成员变量
    char * m_Name;
    // 构造函数
    Person(){
        cout << "Person默认构造函数调用"<< endl;
    }

    // 代参构造
    Person(const char * name){
        cout << "Person有参构造函数调用" << endl;
        this->m_Name = new char[strlen(name) + 1];
        strcpy(this->m_Name, name);
    }

    // 拷贝构造
    Person(const Person & p){
        cout << "Person拷贝构造函数调用" << endl;
        this->m_Name = new char[strlen(p.m_Name) + 1];
        strcpy(this->m_Name, p.m_Name);
    }

    // 重载赋值运算符
    Person& operator=(const Person & p){
        // 1.先判断堆区是否有数据,如果有就先释放干净。
        if(this->m_Name != NULL){
            delete [] this->m_Name;
            this->m_Name = NULL;
        }
        // 深拷贝
        this->m_Name = new char[strlen(p.m_Name) + 1];
        strcpy(this->m_Name, p.m_Name);
        // 返回本体
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
void test01(){
    // 1.创建对象
    Person p1("kobe");
    Person p2("Curry");

    Person p3;
    // 赋值操作
    p3 = p1 = p2;

    cout << "P1的姓名是:" << p1.m_Name << endl;
    cout << "P2的姓名是:" << p2.m_Name << endl;
    cout << "P3的姓名是:" << p3.m_Name << endl;
}
int main() {
    // 调用函数
    test01();
    return 0;
}
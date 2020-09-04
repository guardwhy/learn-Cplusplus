#include <iostream>
using namespace std;
/**
 * 模板具体化实现
 * @return
*/
// 基类:Person
class Person{
public:
    // 成员变量
    string m_Name;
    int m_Age;
    // 构造函数
    Person(string name, int age){
        this->m_Name = name;
        this->m_Age = age;
    }
};

// 函数模板
template <class T>
bool CompareTo(T &a, T &b){
    // 返回值
    cout << "普通实现:";
    return a == b;
}

// 声明函数
void compareFuction01(){
    // 定义变量
    int a = 10;
    int b = 20;
    bool ret = CompareTo(a, b);
    // 条件判断
    if(ret){
        cout << "a==b" << endl;
    }else{
        cout << "a!=b" << endl;
    }
}

// 类具体化函数模板
template < > bool CompareTo(Person &a, Person &b){
    cout << "具体化实现:";
    // 条件判断
    if(a.m_Name == b.m_Name && b.m_Age == b.m_Age){
        return true;
    }

    return false;
}

// 声明函数
void compareFuction02(){
    // 创建对象
    Person p1("curry", 10);
    Person p2("curry", 10);
    // 条件判断
    bool result = CompareTo(p1, p2);
    if(result){
        cout << "p1 == p2" << endl;
    }else{
        cout << "p1 != p2" << endl;
    }
}
int main() {
    // 调用函数
    compareFuction01();
    compareFuction02();
    return 0;
}
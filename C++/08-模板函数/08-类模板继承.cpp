#include <iostream>
using namespace std;
/**
 * 类模板继承
 * @return
*/
// 基类:Base
template <class T>
class Base{
public:
    T m_A;
};
//子类在继承时，必须确定出父类的T的数据类型，否则无法给T分配内存空间
class Son: public Base<int>{
public:
    int m_Name;
};

// 基类Base2
template <class T>
class Base2{
public:
    T m_A;
};

// 派生类:Son2
template <class T1, class T2>
class Son2 : public Base2<T2>{
public:
    // 成员变量
    T1 m_B;
public:
    // 构造函数
    Son2(){
        cout << "T1的类型为:" << typeid(T1).name() << endl;
        cout << "T2的类型为:" << typeid(T2).name() << endl;
    }
};

// 声明函数
void  classTemplate01() {
    // 创建对象
    Son2<int, double> s;
}

int main() {
    // 调用函数
    classTemplate01();
    return 0;
}
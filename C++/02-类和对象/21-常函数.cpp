#include <iostream>
using namespace std;
/**
 * 常函数
 * @return
 */
// 创建person类
class Person{
public:
    // 定义成员变量
    int age;
    mutable int height;

    // 构造函数
    Person(int age){
        this->age = age;
    }
    // 常函数:const修饰的是this指针,成员函数后面写了const
    void display() const {
        this->height = 191;
        // 输出年龄、身高
        cout << "年龄是:"<< this->age << endl;
        cout << "身高是:" << this->height << endl;
    }

    // 普通函数
    void display02(){
        age = 78;
    }
};

/**
 * 普通对象
 * @return
*/
void Function01(){
    // 创建对象
    Person st(10);
    st.display();
}

/**
 * 常对象
 * @return
*/
void constFunction(){
    // 常对象
    const Person st2(10);
    // 常对象调用常函数
    st2.display();
    // 常对象无法调用普通函数
    // st2.display02();

    st2.height = 196; // mutable的关键字,在常对象上也可以修改.
}

int main() {
    // 调用函数
    // Function01();
    constFunction();
    return 0;
}
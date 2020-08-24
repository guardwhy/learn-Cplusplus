#include <iostream>
/**
 * const在C++下分配内存的情况
 */
using namespace std;
// 1.对const修饰的局部变量取地址,会分配临时空间
void test01(){
    // 01.定义变量
    const int const_A = 10;
    int *p = (int *)&const_A;
}

// 2.使用变量，初始化const修饰的局部变量
void test02(){
    // 定义变量
    int a = 10;
    // 会分配内存,可以通过间接修改,修改成功.
    const int const_B = a;

    int * p = (int *)&const_B;
    *p = 30;
    // 输出结果
    cout << "const_B的值:" << const_B << endl;
}

// 3.对于自定义数据类型，也会分配内存
struct Person{
    // 定义变量
    string name;
    int age;
};

// 声明函数
void test03(){
    // 无参构造
    const Person p1{};
    Person * p = (Person *)&p1;
    p->age = 18;
    p->name = "常山赵子龙";

    // 输出结果
    cout << "姓名:" << p->name <<endl<<"年龄:" << p->age << endl;
}
int main() {
    // 1.调用函数
    // test02();
    test03();
    return 0;
}
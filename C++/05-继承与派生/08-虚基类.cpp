#include <iostream>
#include <string>
using namespace std;
/**
 * 虚基类
 * @return
*/
// 创建Person虚基类
class Person{
    // 成员变量
public:
    string name; // 年龄
};
// 虚继承,Male类
class Male : virtual public Person{

};

// 虚继承,Woman类
class Woman: virtual public Person{

};

// 多继承
class Child: public Male, public Woman{

};

int main() {
    /**
     * 从最上面父类继续下来的属性,使用时候有二义性,可以解决,加作用域.
     * 数据有两份相同的，无意义，浪费内存.
     */
     // 创建对象
     Child cd;
     cd.Male::name = "kobe";
     cd.Woman::name = "玛丽";
     cd.name = "Curry";
     // 输出结果
     cout << "男球星:"<< cd.Male::name << endl;
     cout << "女球星:"<< cd.Woman::name << endl;
     cout << "小朋友:"<< cd.name << endl;
    return 0;
}
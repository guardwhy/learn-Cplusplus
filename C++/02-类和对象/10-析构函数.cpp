#include <iostream>
using namespace std;
/**
 * 析构函数
 * @return
 */
// 创建Person类
class Person{
public:

    /**
     * 构造和析构必须要写到公共权限下.
     * 注意:不需要返回值不用写void,构造函数名称与类名相同的. 允许有参数，可以发生函数重载
     * @return
     */
    Person(){
        cout << "构造函数被调用" << endl;
    }

    /**
     * 析构函数:
     * 注意：不需要返回值不用写void,析构函数名称与构造函数相同前面需要加~
     * 不允许有参数不可以发生重载
     * @return
     */
    ~Person(){
        cout << "Person析构函数被调用" << endl;
    }
};


int main() {
    // 创建对象
    Person p1;
    return 0;
}
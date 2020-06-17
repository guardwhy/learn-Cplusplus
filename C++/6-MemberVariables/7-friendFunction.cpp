#include <iostream>
/**
 * 类做友元函数
 */
using namespace std;

// 提前告诉编译器,Home类在后面会创建
class Home;

// 创建goodFriend类
class goodFriend{
public:
    // 构造函数
    goodFriend();

    // 定义函数
    void visit();
    Home * home;
};

class Home{
    // 让goodFriend作为Home类的好朋友,可以访问Home中的私有成员
    friend class goodFriend;
public:
    // 构造函数
    Home();

// 定义变量
public:
    string livingRoom;
private:
    string bedroom;
};

// 构造函数类外实现
Home::Home() {
    livingRoom = "客厅";
    bedroom = "卧室";
}
// 构造函数的类外实现
goodFriend::goodFriend() {
    home = new Home;
}


void goodFriend::visit() {
    cout <<"好朋友正在访问:" << home->bedroom << endl;
    cout <<"好朋友正在访问:" << home->livingRoom << endl;
}

int main() {
    // 创建对象
    goodFriend gf;
    // 对象调函数
    gf.visit();
    return 0;
}
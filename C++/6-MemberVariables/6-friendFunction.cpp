#include <iostream>
/**
 * 全局函数做友元
 */
using namespace std;
// 创建Home类
class Home{
    // 创建友元函数,让全局函数 goodFriend作为本类Home中的好朋友,可以访问私有成员。
    friend void goodFriend(Home & home);

public:
    // 构造函数
    Home(){
        livingRoom = "客厅";
        bedroom = "卧室";
    }
public:
    // 定义变量
    string livingRoom;

private:
    // 卧室
    string bedroom;

};

// 定义goodFriend()函数
void goodFriend(Home & home){
    cout <<"好朋友正在访问:" << home.livingRoom << endl;
    cout <<"好朋友正在访问:" << home.bedroom << endl;
}
int main() {
    // 创建home对象
    Home home;
    // 调用函数
    goodFriend(home);
    return 0;
}
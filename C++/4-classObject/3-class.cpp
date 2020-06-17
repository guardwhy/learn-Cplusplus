#include <iostream>
/**
 * 将成员属性设置成私有属性
 */
using namespace std;

// 创建Person类
class Person{
public:
    // 设置姓名
    void setName(string name){
        myName = name;
    }
    // 获取姓名
    string getName(){
        return myName;
    }
    // 设置年龄
    void setAge(int age){
        // 检测年龄
        if(age < 0 || age > 30){
            cout << "不好意思,你不是学生了" << endl;
            return;
        }
        myAge = age;
    }

    // 获取年龄
    int getAge()
    {
        return myAge;
    }
private:
    string myName;  // 姓名
    int myAge = 18;
};

// 声明函数
void test(){
    // 创建对象
    Person p1;
    // 对于姓名,可以设置也可以获取
    p1.setName("curry");
    cout << "p1的姓名是:" << p1.getName() << endl;

    // 年龄的是只读状态,不可以设置
    p1.setAge(55);
    cout << "p1的年龄为:" << p1.getAge() <<endl;
}
int main() {
    // 调用函数
    test();
    return 0;
}
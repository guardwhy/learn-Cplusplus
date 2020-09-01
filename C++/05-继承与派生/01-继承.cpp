#include <iostream>
#include <string>
using namespace std;
/**
 * 继承
 * @return
*/

// 基类 People
class People{
private:
    // 成员变量
    string m_Name; // 姓名
    int m_Age;  // 年龄
public:
    // 声明属性函数
    void setName(string name);
    void setAge(int age);
    string getName();
    int getAge();
};
// 定义函数
void People::setName(string name) {
    this->m_Name = name;
}
void People::setAge(int age) {
    this->m_Age = age;
}
string People::getName(){
    return m_Name;
}
int People::getAge() {
    return m_Age;
}

// 派生类
class Student: public People{
private:
    float m_Score; // 年龄
public:
    // 声明属性函数
    void setScore(float score);
    float getScore();
};
// 类外定义
void Student::setScore(float score) {
    this->m_Score = score;
}
float Student::getScore() {
    return m_Score;
}

int main() {
    // 创建对象
    Student st;
    // 调用函数赋值
    st.setName("Curry");
    st.setAge(10);
    st.setScore(99.01);
    // 输出最终
    cout <<"名字:"<< st.getName() << ", 年龄是:"<< st.getAge() << ", 分数是:"<< st.getScore() << endl;
    return 0;
}
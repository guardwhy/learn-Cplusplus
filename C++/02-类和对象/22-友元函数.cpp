#include <iostream>
using namespace std;
/**
 * 友元函数
 * @return
*/
class Student{
// 成员变量
private:
    char* m_name;
    int m_age;
    float m_score;
    // 构造函数
public:
    Student(char* name, int age, float score);
    // 声明友元函数
    friend void display(Student *pstu);
};

// 构造函数初始化
Student::Student(char *name, int age, float score):m_name(name), m_age(age),m_score(score){}

// 普通函数
void display(Student *pstu){
    // 输出结果
    cout << "姓名:"<< pstu->m_name<<",年龄:"<< pstu->m_age << ", 分数:"<< pstu->m_score << endl;
}
int main() {
    // 栈上创建对象
    Student stu("curry", 10, 90.67);
    // 调用函数
    display(&stu); // 调用友元函数
    // 堆上创建对象
    Student *pstu = new Student("kobe", 41, 95.89);
    display(pstu);
    return 0;
}
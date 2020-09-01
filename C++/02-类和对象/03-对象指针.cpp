#include <iostream>
#include <string.h>
using namespace std;
/**
 * 对象指针
 * @return
*/
// 定义类student
class Student{
public:
    // 成员变量
    string name;
    int age;
    float score;

    void display() {
        // 输出结果
        cout << "姓名:"<< name << endl << "年龄:"<< age << endl << "分数:"<< score << endl;
    }
};

int main() {
    // 定义类指针对象
    Student *pStu = new Student;
    // 给Student类成员变量赋值
    pStu->name = "curry";
    pStu->age = 10;
    pStu->score = 98.00;
    // 调用函数
    pStu->display();
    // 删除对象
    delete pStu;
    return 0;
}
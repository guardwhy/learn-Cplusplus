#include <iostream>
/**
 * thisָ��
 */
using namespace std;
// ����Student
class Student{
public:
    // �������
    int age;

    // ���췽��
    Student(int age){
        this->age = age;
    }

    // ��ӷ���
    Student& studentAddage(Student & stu){
        // �������
        this->age += stu.age;
        return *this; // *thisָ��stu2����, thisָ��stu2��ָ�롣
    }
};
int main() {
    // ����stu����
    Student stu(15);
    cout << "С�׵�������:" << stu.age << endl;

    // ����stu2����
    Student stu2(10);
    stu2.studentAddage(stu);
    cout << "С����������:" << stu2.age << endl;
    return 0;
}
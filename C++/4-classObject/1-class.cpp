#include <iostream>
/**
 * ��Ͷ���
 */
using namespace std;

//ͨ��class�ؼ��ֶ���ѧ����
class Student{
public:
    // �������
    char *name;
    int age;
    float score;
    // ��������
    void say(){
        // ������
        cout << name << "��������:" << age <<", �ɼ���:" << score << endl;
    }
};
int main() {
    //��������
     Student stu;
    //Ϊ��ĳ�Ա������ֵ
    stu.name = "curry";
    stu.age = 10;
    stu.score = 92.5f;
    //���ú���
    stu.say();
    return 0;
}
#include <iostream>
/**
 * ��̬��Ա����
 */
using namespace std;

class Student{
    // ���徲̬��Ա����
    static int a;
    // ����Ǿ�̬��Ա����
    int c;

public:
    // ��ͨ����,���Է��ʾ�̬�ͷǾ�̬��Ա����
    void func(){
        a = 100;
        c = 30;
        cout << "a��ֵ��:"<< a << endl << "c��ֵ��:"<< c << endl;
    }

    // ��̬��Ա����
    static void func1(){
        cout << "func1��̬��Ա��������" << endl;
        a = 300;
        cout << "a��ֵ��:"<< a << endl;
    }
};

// ��ʼ����̬��Ա����
int Student::a = 400;


//��̬��Ա����
void test(){
    // ���ʷ�ʽ: ͨ������
    Student stu;
    stu.func1();

    // ���ʷ�ʽ:ͨ����������
    Student::func1();
}
int main() {
    // ���ú���
    test();
    return 0;
}
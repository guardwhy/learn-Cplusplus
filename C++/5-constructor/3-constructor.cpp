#include <iostream>
/**
 * �������캯���ĵ���ʱ��
 */
using namespace std;

// ����ѧ����
class Student{
public:
    // �������
    int age;

    Student(){
        cout << "Student��Ĭ�Ϲ��캯������" << endl;
    }

    Student(int a){
        cout << "Student���вι��캯������" << endl;
    }

    // ��������,ֵ���ݵı��ʾ��ǵ��ÿ������캯��
    Student(const Student &stu){
        cout << "Student�Ŀ������캯������" << endl;
        age = stu.age;
    }

    ~Student(){
        cout << "Student��������������" << endl;
    }
};

// 1.���Ѿ������õĶ����ʼ���µĶ���
void test01(){
    Student stu;
    stu.age = 19;

    // �������캯������
    Student stu2(stu);
    cout << "stu2��������:" << stu2.age << endl;
}

// 2.ֵ���ݵķ�ʽ ������������ֵ
void doStudy(Student stu){}

void test02(){
    // ��������
    Student stu;
    doStudy(stu);
}

// 3����ֵ�ķ�ʽ���ؾֲ�����
Student doStudy2(){
    Student stu;
    return stu;
}

void test03(){
    Student stu = doStudy2();
}

int main() {
    cout << "Hello, World!" << endl;
    // ���ú���
    // test01();

    test02();
    return 0;
}
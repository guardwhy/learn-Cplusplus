#include <iostream>
/**
 * ���캯���ķ��ࣺ
 *  ���෽ʽ1: ���� �޲ι���(Ĭ�Ϲ���) �вι���
 *  ���෽ʽ2: ���� �������� ��ͨ����
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

// ���캯���ĵ���
void test01(){
    // Ĭ�Ϲ��캯���ĵ���
    Student stu;

}

/**
 * ���÷���
 * @return
 */

void test02(){
    /**
     * ���ŷ�
     */

     /*
     Student stu(10); // �вι���
     stu.age = 16;

     // ���ÿ������캯��
     Student stu1(stu);
     cout << "stu1��������:"<< stu1.age << endl;
      */

    // ע��:��Ҫ�������ŷ�,����Ĭ�Ϲ��캯�� Student stu(); �����뿴�ɺ�����������������Ϊ���ڴ�������

    /**
     * ��ʾ��
     */

     /*
     Student stu3 = Student(10); // �вι������
     Student stu4 = Student(stu3); // ��ʾ�����ÿ������캯��
     */

     // ��������
     // Student(10); // ����дStudent(10),����Ϊ��������,�ص�:������ִ�����,�����ͷš�
     // ��Ҫ���ÿ������캯��,��ʼ����������

     // ��ʽת���� �ɶ��Ե�
     Student stu5 = 10; // ��������ʽ������ת��Ϊ Student stu = Student(10);
     // ������ʽת����,���ÿ������캯��
     Student stu6 = stu5; // ��ʽתΪstudent stu6 = Student(stu5);

}
int main() {
    cout << "Hello, World!" << endl;
    // ���ú���
    // test01();

    test02();
    return 0;
}
#include <iostream>
/**
 * ����Ա�������ó�˽������
 */
using namespace std;

// ����Person��
class Person{
public:
    // ��������
    void setName(string name){
        myName = name;
    }
    // ��ȡ����
    string getName(){
        return myName;
    }
    // ��������
    void setAge(int age){
        // �������
        if(age < 0 || age > 30){
            cout << "������˼,�㲻��ѧ����" << endl;
            return;
        }
        myAge = age;
    }

    // ��ȡ����
    int getAge()
    {
        return myAge;
    }
private:
    string myName;  // ����
    int myAge = 18;
};

// ��������
void test(){
    // ��������
    Person p1;
    // ��������,��������Ҳ���Ի�ȡ
    p1.setName("curry");
    cout << "p1��������:" << p1.getName() << endl;

    // �������ֻ��״̬,����������
    p1.setAge(55);
    cout << "p1������Ϊ:" << p1.getAge() <<endl;
}
int main() {
    // ���ú���
    test();
    return 0;
}
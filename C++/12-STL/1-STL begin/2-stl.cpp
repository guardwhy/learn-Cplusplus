#include <iostream>
#include <vector>
/**
 * �Զ�����������
 */
using namespace std;

// ����Prson��
class Person{
public:
    // ��Ա����
    int m_Age;
    string m_Name;

    // ���췽��
    Person(string name, int age){
        this->m_Name = name;
        this->m_Age = age;
    }
};

int main() {
    // ��������
    vector<Person>v;
    // �������
    Person p1("curry", 10);
    Person p2("kobe", 20);
    Person p3("james", 30);
    Person p4("jordan", 40);

    v.push_back(p1);
    v.push_back(p2);
    v.push_back(p3);
    v.push_back(p4);

    // ����ѭ��
    for (vector<Person>::iterator it = v.begin(); it!= v.end(); it++){
        // ������������
        cout << "����" << (*it).m_Name << "����:" << (*it).m_Age << endl;
    }
    return 0;
}
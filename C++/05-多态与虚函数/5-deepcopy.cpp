#include <iostream>
#include <cstring>
/**
 * �����ǳ����
 */
using namespace std;

// ����Person��
class Person{
public:
    // �����Ա����
    char * myName;
    int myAge;

    // ���ι���
    Person(char * name, int age){
        // ��Person��name,age���ٶѿռ�
        myName = (char *)malloc(strlen(name) + 1);
        strcpy(myName, name);
        myAge = age;
    }

    //�Լ��ṩ�������캯����ʵ�����
    Person(const Person &p){
        myAge = p.myAge;
        myName = (char *)malloc(strlen(p.myName) + 1);
        // ����
        strcpy(myName, p.myName);
    }

    // ��������
    ~Person(){ // �ͷ��ڶѿռ俪�ٵ�����
        cout << "Person��������������" << endl;
        // �����ж�
        if(myName != NULL){
            free(myName);
            myName = NULL;
        }
    }
};

// ��������
void test01(){
    Person p1("curry", 10);
    cout << "p1������:" << p1.myName << "����:"<<p1.myAge <<endl;

    // ���ÿ������캯��
    Person p2 = p1; // ��ʼ��p2����
    cout << "p2������:" << p2.myName << "����:" << p2.myAge << endl;
}
int main() {
    cout << "Hello, World!" << endl;
    test01();
    return 0;
}
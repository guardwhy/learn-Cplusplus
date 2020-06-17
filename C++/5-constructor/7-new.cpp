#include <iostream>
#include <cstring>

using namespace std;
// ����Person��
class Person{
public:
    // �����Ա����
    char* pName;
    int mAge;

    // �޲ι���
    Person(){
        cout << "�޲ι��캯��!" << endl;
        pName = (char*)malloc(strlen("undefined") + 1);
        strcpy(pName, "undefined");
        mAge = 0;
    }
    // ���ι���
    Person(char* name, int age){
        cout << "�вι��캯��!" << endl;
        pName = (char*)malloc(strlen(name) + 1);
        strcpy(pName, name);
        mAge = age;
    }
    void ShowPerson(){
        cout << "Name:" << pName << " Age:" << mAge << endl;
    }
    ~Person(){
        cout << "��������!" << endl;
        if (pName != NULL){
            delete pName;
            pName = NULL;
        }
    }
};

// ���ú���
void test(){
    // ��������
    Person* person1 = new Person;
    Person* person2 = new Person("John",33);

    // ������÷���
    person1->ShowPerson();
    person2->ShowPerson();

    // �ͷ��ڴ�
    delete person1;
    delete person2;
}


int main()
{   // ���ú���
    test();
    return 0;
}
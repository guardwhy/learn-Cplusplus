#include <iostream>
/**
 * ������Ԫ����
 */
using namespace std;

// ��ǰ���߱�����,Home���ں���ᴴ��
class Home;

// ����goodFriend��
class goodFriend{
public:
    // ���캯��
    goodFriend();

    // ���庯��
    void visit();
    Home * home;
};

class Home{
    // ��goodFriend��ΪHome��ĺ�����,���Է���Home�е�˽�г�Ա
    friend class goodFriend;
public:
    // ���캯��
    Home();

// �������
public:
    string livingRoom;
private:
    string bedroom;
};

// ���캯������ʵ��
Home::Home() {
    livingRoom = "����";
    bedroom = "����";
}
// ���캯��������ʵ��
goodFriend::goodFriend() {
    home = new Home;
}


void goodFriend::visit() {
    cout <<"���������ڷ���:" << home->bedroom << endl;
    cout <<"���������ڷ���:" << home->livingRoom << endl;
}

int main() {
    // ��������
    goodFriend gf;
    // ���������
    gf.visit();
    return 0;
}
#include <iostream>
/**
 * ȫ�ֺ�������Ԫ
 */
using namespace std;
// ����Home��
class Home{
    // ������Ԫ����,��ȫ�ֺ��� goodFriend��Ϊ����Home�еĺ�����,���Է���˽�г�Ա��
    friend void goodFriend(Home & home);

public:
    // ���캯��
    Home(){
        livingRoom = "����";
        bedroom = "����";
    }
public:
    // �������
    string livingRoom;

private:
    // ����
    string bedroom;

};

// ����goodFriend()����
void goodFriend(Home & home){
    cout <<"���������ڷ���:" << home.livingRoom << endl;
    cout <<"���������ڷ���:" << home.bedroom << endl;
}
int main() {
    // ����home����
    Home home;
    // ���ú���
    goodFriend(home);
    return 0;
}
#include <iostream>
/**
 * �ַ���ƴ�ӺͲ����滻
 */
using namespace std;

int main() {
    /**
     ƴ��
    string& operator+=(const string& str);//����+=������
    string& operator+=(const char* str);//����+=������
    string& operator+=(const char c);//����+=������
    string& append(const char *s);//���ַ���s���ӵ���ǰ�ַ�����β
    string& append(const char *s, int n);//���ַ���s��ǰn���ַ����ӵ���ǰ�ַ�����β
    string& append(const string &s);//ͬoperator+=()
    string& append(const string &s, int pos, int n);//���ַ���s�д�pos��ʼ��n���ַ����ӵ���ǰ�ַ�����β
    string& append(int n, char c);//�ڵ�ǰ�ַ�����β���n���ַ�c
     */

    string s1 = "curry";
    s1 += "��mvp.";
    // ������
    cout << s1 << endl;

    s1.append(",��NBA");
    cout << s1 << endl;

    /**
     * string���Һ��滻
    int find(const string& str, int pos = 0) const; //����str��һ�γ���λ��,��pos��ʼ����
    int find(const char* s, int pos = 0) const;  //����s��һ�γ���λ��,��pos��ʼ����
    int find(const char* s, int pos, int n) const;  //��posλ�ò���s��ǰn���ַ���һ��λ��
    int find(const char c, int pos = 0) const;  //�����ַ�c��һ�γ���λ��
    int rfind(const string& str, int pos = npos) const;//����str���һ��λ��,��pos��ʼ����
    int rfind(const char* s, int pos = npos) const;//����s���һ�γ���λ��,��pos��ʼ����
    int rfind(const char* s, int pos, int n) const;//��pos����s��ǰn���ַ����һ��λ��
    int rfind(const char c, int pos = 0) const; //�����ַ�c���һ�γ���λ��
    string& replace(int pos, int n, const string& str); //�滻��pos��ʼn���ַ�Ϊ�ַ���str
    string& replace(int pos, int n, const char* s); //�滻��pos��ʼ��n���ַ�Ϊ�ַ���s
     */

    // ���Һ��滻
    string str1 = "abcdefghde";
    // ����ʼλ��ʼ����λ��,Ĭ����0
    int pos = str1.find("de");
    /**
     * find���������,rfind���������
     */
    if(pos == -1){
        cout << "δ�ҵ��ִ�" << endl;
    }else{
        cout << "�ҵ��ִ�,λ����:" << pos << endl;
    }

    // �滻
    string str2 = "abcderfg";
    // string& replace(int pos, int n, const string& str); //�滻��pos��ʼn���ַ�Ϊ�ַ���str.
    str2.replace(1,3,"11111");
    cout << str2 << endl;
    return 0;
}
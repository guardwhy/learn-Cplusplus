#include <iostream>
using namespace std;
/**
 * 公共继承
 * @return
*/
// 基类Person
class Person01{
public:
    string m_Name;
protected:
    int m_Age;
private:
    int m_Score;
};
// 派生类 Student
class Student01: public Person01{
    // 成员函数
    void function(){
        m_Name = "guardwhy";    // 父类中的m_Name到了子类中,是public权限
        m_Age = 30; // 父类中的m_Age到了子类中,是protected权限.
        // m_Score = 99.10;    // 父类中私有m_Score在子类中访问不到
    }
};

// 定义函数
void InheritanceStyle01(){
    // 创建对象
    Student01 stu;
    stu.m_Name = "curry";   // Student中的m_Name可以访问的,在Student中是public权限.
    // stu.m_Age= 30;  //Student中的m_Age不可以访问的,在Student中是protected权限.
    cout << "姓名:"<< stu.m_Name << endl;
}

/**
 * 保护继承
 * @return
*/
// 基类Person
class Person02{
public:
    string m_Name;
protected:
    int m_Age;
private:
    int m_Score;
};
// 派生类 Student
class Student02: protected Person02{
    // 成员函数
    void function(){
        m_Name = "guardwhy";    // 父类中的m_Name到了子类中,是protected权限.
        m_Age = 30; // 父类中的m_Age到了子类中,是protected权限.
        // m_Score = 99.10;    // 父类中私有m_Score在子类中访问不到
    }
};

// 定义函数
void InheritanceStyle02(){
    // 创建对象
    Student02 stu;
    // stu.m_Name = "curry";   // Student中的m_Name不可以访问的,在Student中是protected权限.
    // stu.m_Age= 30;  //Student中的m_Age不可以访问的,在Student中是protected权限.
    // cout << "姓名:"<< stu.m_Name << endl;
}

/**
 * 私有继承
 * @return
*/
// 基类Person
class Person03{
public:
    string m_Name;
protected:
    int m_Age;
private:
    int m_Score;
};
// 派生类 Student
class Student03: private Person03{
    // 成员函数
    void function(){
        m_Name = "guardwhy";    // 父类中的m_Name到了子类中,是private权限
        m_Age = 30; // 父类中的m_Age到了子类中,是private权限.
        // m_Score = 99.10;    // 父类中私有m_Score在子类中访问不到
    }
};
// 派生类CnStudent
class CnStudent: public Student03{
public:
    void function(){
        // m_Name = "curry";  // m_Name在Student03中私有属性,子类访问不到
        // m_Age = 20;        // 在Student03私有权限,子类访问不到
        // m_Score = 99.45;  // Student03访问不到
    }
};

// 定义函数
void InheritanceStyle03(){
    // 创建对象
    Student03 stu;
    // stu.m_Name = "curry";   // Student中的m_Name不可以访问的,类外访问不到
    // stu.m_Age= 30;  //Student中的m_Age不可以访问的,类外访问不到
    // cout << "姓名:"<< stu.m_Name << endl;
}
int main() {
    // 调用函数
    InheritanceStyle01();
    InheritanceStyle02();
    InheritanceStyle03();
    return 0;
}
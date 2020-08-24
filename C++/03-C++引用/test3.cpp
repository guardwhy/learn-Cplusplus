#include <iostream>
/**
 * 指针的引用
 */
using namespace std;

// 定义Person结构体类型
struct Person{
    // 姓名
    string name;
    // 年龄
    int age;
};

// 传统方法
void mallocMethod(Person ** person){
    // 分配内存空间
    Person *p = (Person *)malloc(sizeof(Person));
    p->age = 21;
    p->name = "Curry";
    *person = p;
}

// 调用函数
void test01(){
    // 初始化
    Person *p = NULL;
    mallocMethod(&p);
    // 输出结果
    // cout << "姓名是:"<< p->name <<endl << "年龄是:"<< p->age << endl;
    cout << "p的年龄： " << p->age << endl;
    cout << "p的姓名： " << p->name << endl;
}

// 指针引用
void mallocMethods(Person * &p){
    // 分配内存空间
    p = (Person *)malloc(sizeof(Person));
    p->age = 22;
    p->name = "kobe";
}

// 释放方法
void freeMethods(Person * &p){
    free(p);
    p = NULL;
}

// 调用函数
void test02(){
    // 初始化
    Person *p = NULL;
    mallocMethods(p);
    // 输出结果
    cout << "p的年龄： " << p->age << endl;
    cout << "p的姓名： " << p->name << endl;

    // 调用freeMethods()
    freeMethods(p);
}
int main() {
    // 调用函数
    // test01();
    test02();
    return 0;
}
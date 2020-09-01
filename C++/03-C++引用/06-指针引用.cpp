#include <iostream>
using namespace std;
/**
 * 指针引用
 * @return
*/

// Person结构体
struct Person{
    // 定义成员变量
    int m_Age;
};

/**
 * 指针
 * @return
*/
void Pointer(Person ** person){
    // 分配内存
    Person *p = (Person*)malloc(sizeof(Person));
    // 赋值操作
    p->m_Age = 33;
    *person = p;
}

/**
 * 指针引用
 * @return
*/
void pointerReference(Person * &p1){
    // 分配内存
    p1 = (Person*)malloc(sizeof(Person));
    p1->m_Age = 66;
}

int main() {
    // 创建指针对象
    Person * p = NULL;
    // 调用函数
    Pointer(&p);
    cout << "p的年龄(指针传递):" << p->m_Age << endl;  // 23

    cout << "---------------------"<< endl;

    // 创建指针对象
    Person * p1 = NULL;
    // 调用函数
    pointerReference(p1);
    cout << "p1的年龄(引用传递):" << p1->m_Age << endl;    // 66
    // 条件判断
    if(p1 == NULL){
        cout << "空指针" << endl;
    }

    // 释放空间
    free(p1);
    return 0;
}
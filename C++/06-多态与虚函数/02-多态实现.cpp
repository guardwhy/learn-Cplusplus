#include <iostream>
using namespace std;
/**
 * 多态:利用多态实现计算器
 * @return
*/
// 基类:AbstractCalculator
class AbstractCalculator{
public:
    // 定义成员变量
    int m_A;
    int m_B;
    // 纯虚函数定义
    virtual int getResult() = 0;
    /**
     * 纯虚函数:当类中有了纯虚函数,这个类属于抽象类.抽象类是无法实例化对象的
     * 当有子类继承了抽象类，那么这个子类必须要重写父类中的纯虚函数，否则子类也是抽象类
     */
};
// 加法计算器
class AddCalculator: public AbstractCalculator{
public:
    virtual int getResult(){
        return m_A + m_B;
    }
};
// 减法计算器
class SubCalculator: public AbstractCalculator{
public:
    virtual int getResult(){
        return m_A - m_B;
    }
};
// 乘法计算器
class MulCalculator: public AbstractCalculator{
public:
    virtual int getResult(){
        return m_A * m_B;
    }
};

int main() {
    // 创建计算器对象
    AbstractCalculator * cal = new AddCalculator; // 多态
    // 赋值操作
    cal->m_B = 20;
    cal->m_A = 10;
    // 输出结果
    cout << "两值相加:"<< cal->getResult() << endl;
    // 释放堆内存
    delete cal;

    // 减法对象
    cal = new SubCalculator;
    // 赋值操作
    cal->m_A = 100;
    cal->m_B = 20;
    // 输出结果
    cout << "两值相加:"<< cal->getResult() << endl;
    // 释放堆内存
    delete cal;

    // 乘法操作
    cal = new MulCalculator;
    // 赋值操作
    cal->m_B = 5;
    cal->m_A = 6;
    // 输出结果
    cout << "两值相乘:"<< cal->getResult() << endl;
    // 释放内存
    delete cal;
    return 0;
}
#include <iostream>
using namespace std;
/**
 * 多态综合实例
 * @return
*/
// 抽象基类:CPU
class CPU{
public:
    // 纯虚函数
    virtual void calculate() = 0;
};
// 抽象基类:显卡
class VideoCard{
public:
    // 纯虚函数
    virtual void display() = 0;
};
// 抽象基类:内存
class Memory{
public:
    virtual void storage() = 0;
};

// 电脑类
class Computer{
public:
    // 成员变量
    CPU * m_CPU;
    VideoCard * m_VC;
    Memory * m_MEM;
    // 构造函数
    Computer(CPU *cpu, VideoCard * vc, Memory * men){
        this->m_CPU = cpu;
        this->m_VC = vc;
        this->m_MEM = men;
    }
    // 工作函数
    void doWork(){
        this->m_CPU->calculate();
        this->m_VC->display();
        this->m_MEM->storage();
    }

    // 析构函数
    ~Computer(){
        if(this->m_CPU != NULL){
            delete this->m_CPU;
            m_CPU = NULL;
        }
        if(this->m_VC!= NULL){
            delete this->m_VC;
            m_VC= NULL;
        }
        if(this->m_MEM != NULL){
            delete this->m_MEM;
            m_MEM = NULL;
        }
    }
};

// 具体零件
class intelCPU: public CPU{
public:
    // 纯虚函数重写
    virtual void calculate(){
        cout << "intel的cpu开始计算了.."<< endl;
    }
};
class intelVideoCard: public VideoCard{
public:
    virtual void display(){
        cout << "intel的显卡开始显示了" << endl;
    }
};
class intelMemory: public Memory{
public:
    virtual void storage(){
        cout << "intel的内存条开始存储了" << endl;
    }
};

// Apple实现
class AppleCPU: public CPU{
public:
    // 纯虚函数重写
    virtual void calculate(){
        cout << "Apple的cpu开始计算了.."<< endl;
    }
};
class AppleVideoCard: public VideoCard{
public:
    virtual void display(){
        cout << "Apple的显卡开始显示了" << endl;
    }
};
class AppleMemory: public Memory{
public:
    virtual void storage(){
        cout << "Apple的内存条开始存储了" << endl;
    }
};

int main() {
    cout <<"第一台电脑组装:"<< endl;
    // 创建对象
    CPU * intelcpu = new intelCPU;
    VideoCard * intelvc = new intelVideoCard;
    Memory* intelmem = new intelMemory;

    // 调用对象
    Computer cs(intelcpu, intelvc, intelmem);
    cs.doWork();

    cout <<"第二台电脑组装:"<< endl;
    // 创建对象
    CPU * applecpu = new AppleCPU;
    VideoCard * applevc = new AppleVideoCard;
    Memory* applemem = new AppleMemory;

    // 调用对象
    Computer aps(applecpu, applevc, applemem);
    aps.doWork();
    return 0;
}
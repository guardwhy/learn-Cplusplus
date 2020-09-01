#include <iostream>
#include <string>
using namespace std;
/**
 * 字符串的增删改查
 * @return
*/
int main() {
    /**
     * 插入字符串
     * @return
    */
    string s1, s2, s3;
    // 定义字符串
    s1 = s2 = "guardwhy";
    s3 = "mvp";
    // 插入操作
    s1.insert(8, s3);
    // 输出结果
    cout<< "添加字符串:" << s1 << endl;
    cout << "----------"<< endl;

    /**
     * 删除字符串
     * @return
    */
    string s4, s5, s6;
    s4 = s5 = s6 = "guardwhy";
    // 删除操作
    s6.erase(5,3);
    // 输出字符串
    cout << "删除字符串:"<< s6 << endl;
    cout << "------------"<< endl;

    /**
     * 字符串查找
     * @return
    */
    string a = "guardwhy is mvp";
    string b = "mvp";
    int index = a.find(b, 11);
    // 条件判断
    if(index < a.length()){
        cout << "字符所在的位置:" << index << endl;
    } else{
        cout << "没有发现"<< endl;
    }
    cout << "+++++++++++++"<< endl;

    /**
     * 字符串中首次出现的位置
     * @return
    */
    string c = "first second second third";
    string d = "asecond";
    int index1 = c.find_first_of(d);
    // 条件判断
    if(index < a.length()){
        cout << "字符所在的位置:" << index1 << endl;
    } else{
        cout << "没有发现"<< endl;
    }

    return 0;
}
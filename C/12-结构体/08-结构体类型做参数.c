#include <stdio.h>
/**
 *结构体变量作参数和返回值
 * @return
*/
// 创建结构体House类型
struct house{
    // 成员属性
    int length; // 长度
    int width; // 宽度
};

struct house addHouse(struct house stu1, struct house stu2){
    struct house HS; // 结构体变量
    HS.length = stu1.length + stu2.length;
    HS.width = stu1.width + stu2.width;
    // 返回值
    return HS;
}

int main() {
    struct house stu1 = {10, 7};
    struct house stu2 = {12, 8};
    struct house  HS = addHouse(stu1, stu2);
    // 输出结果
    printf("房子的长度是:%d\n房子的宽度是:%d\n", HS.length, HS.width);
    return 0;
}
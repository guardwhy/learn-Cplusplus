#include <stdio.h>
/**
 *用指针作参数避免了同名复制。
 * @return
*/

// 创建结构体House类型
struct house{
    // 成员属性
    int length; // 长度
    int width; // 宽度
};

struct house addHouse(struct house *Hstu1, struct house *Hstu2){
    struct house HS; // 结构体变量
    HS.length = Hstu1->length + Hstu2->length;
    HS.width = Hstu1->width + Hstu2->width;
    // 返回值
    return HS;
}

int main() {
    struct house stu1 = {10, 7};
    struct house stu2 = {12, 8};
    struct house  HS = addHouse(&stu1, &stu2);
    // 输出结果
    printf("房子的长度是:%d\n房子的宽度是:%d\n", HS.length, HS.width);
    return 0;
}
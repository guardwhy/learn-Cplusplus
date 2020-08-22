#include <stdio.h>
/**
 * 结构体类型的大小
 * @return
*/

// 创建stu结构体类型
struct Stu{
    char sex; // 性别
    int age; // 年龄
};

int main() {
    // 创建stu变量
    struct Stu tu;
    // 输出结构体大小
    printf("struct stu = %ld\n", sizeof(struct Stu));   // 8
    // 输出结构体的地址值
    printf("tu的地址值:%p\n", &tu); // 0x7fffd37b5510
    printf("tu.sex的地址值:%p\n", &tu.sex); // 0x7fffd37b5510
    printf("tu.age的地址值:%p\n", &tu.age); // 0x7fffd37b5514
    
    return 0;
}
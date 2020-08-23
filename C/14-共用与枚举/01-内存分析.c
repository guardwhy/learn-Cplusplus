#include <stdio.h>
/**
 * 共用体占用空间的大小取决于类型长度最大的成员
 * @return
 */

// 共同体untest类型
union untest{
    char c;
    short s;
    int i;
};

// 结构体Test类型
struct Test{
    char c;
    short s;
    int i;
};

int main()
{
    //输出共同体的地址
    printf("sizeof(union untest)= %ld\n", sizeof(union untest));    // sizeof(union untest)= 4
    // 输出结构体的地址
    printf("sizeof(struct Test) = %ld\n", sizeof(struct Test));     // sizeof(struct Test) = 8
    return 0;
}

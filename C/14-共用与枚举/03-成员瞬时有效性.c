#include <stdio.h>
#include <string.h>
/**
 * 成员瞬时有效性
 * @return
*/

// student共用体
union stu{
    char name[10];
    int age;
};

int main() {
    // 共用体gmax变量
    union stu m;
    // 拷贝函数
    strcpy(m.name, "guardwhy");
    // 输出结果
    printf("%s\n", m.name); // guardwhy
    printf("%d\n", m.age);  // 1918989671

    m.age = 30;
    // 共用体的成员变量
    printf("%s\n", m.name); // null
    printf("%d\n", m.age);  // 30
    return 0;
}
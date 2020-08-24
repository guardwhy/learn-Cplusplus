#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * fwrite函数:按照块写文件
 * fread函数: 将文件数据原样读取到内存
 * @return
*/
// 创建结构体数据类型
typedef struct {
    // 成员属性
    char name[16];
    int damage;
    int deff;
}START;

// 创建写入函数
void test01() {
    START start[5] = {
            {"kobe", 90, 90},
            {"Curry",90, 85},
            {"Paul", 88, 78},
            {"Harden", 85, 88},
            {"James", 91, 93}  
    };
    // 打开文件
    FILE* fp = fopen("d.txt", "w");
    // 条件判断
    if (fp == NULL) {
        perror("fopen");
        return;
    }

    fwrite(start, sizeof(START), 5, fp);
    // 关闭fp
    fclose(fp);
}

// 创建读取函数
void test02() {
    // 定义数组
    START start[16];
    memset(start, 0, sizeof(start));
    // 打开文件
    FILE* fp = fopen("d.txt", "r");
    // 条件判断
    if (fp == NULL) {
        perror("fopen");
        return;
    }

    // 定义变量
    int n = 0;
    // 调用读函数
    n = fread(start, sizeof(START), 16, fp);
    // 遍历数组
    for (int i = 0; i < n; i++) {
        printf("name=%s, damage=%d, deff=%d\n", start[i].name, start[i].damage, start[i].deff);
    }

    // 关闭
    fclose(fp);
}

int main() {
    // 调用函数
    test01();
    test02();
    return 0;
}



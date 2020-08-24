#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * 格式化文件的输入输出
 * @return
*/

// 创建结构体数据类型
typedef struct {
    // 成员属性
    char name[16];
    int damage;
    int deff;
}START;

// 创建fprintf写入函数
void fprintf01() {
    START start[5] = {
            {"kobe", 90, 90},
            {"Curry",90, 85},
            {"Paul", 88, 78},
            {"Harden", 85, 88},
            {"James", 91, 93} 
    };
    // 打开文件
    FILE *fp = fopen("e.txt", "w");
    // 条件判断
    if(fp == NULL){
        perror("fopen");
        return;
    }

    // 遍历数组
    for(int i=0; i < sizeof(start)/sizeof(start[0]); i++){
        int length = fprintf(fp, "[姓名]%s [伤害]%d [防御]%d\n", start[i].name, start[i].damage, start[i].deff);
        printf("length=%d\n", length);
    }
    // 关闭fp
    fclose(fp);
}

// 创建读取函数
void fscanf02(){
    // 定义数组
    START start[15];
    memset(start, 0, sizeof(start));
    // 打开文件
    FILE *fp = fopen("e.txt", "r");
    // 条件判断
    if(fp == NULL){
        perror("fopen");
        return;
    }

    // 定义变量
    int i = 0;
    // 条件判断
    while (!feof(fp)){
        // 读取
        fscanf(fp, "[姓名]%s [伤害]%d [防御]%d\n", start[i].name, &start[i].damage, &start[i].deff);
        i++;
    }
    // 定义变量
    int n = i;
    
    // 遍历数组
    for(int i=0; i < n; i++){
        printf("name=%s, damage=%d, deff=%d\n", start[i].name, start[i].damage, start[i].deff);
    }
    // 关闭
    fclose(fp);
}

int main() {
    // 调用函数
    fprintf01();
    fscanf02();
    return 0;
}



#include <stdio.h>
/**
 * 指针函数
 * @return
*/

// 定义star函数
void star(int *height){
    // 条件判断
    if(*height < 195){
        *height = 195;
    }
}

int main() {
    // 定义变量
    int kobe = 196;
    int james = 203;
    int Curry = 191;

    // 调用函数
    star(&Curry);
    
    printf("kobe的身高:%d\n", kobe);
    printf("james的身高:%d\n", james);
    printf("Curry的身高:%d\n", Curry);
    return 0;
}
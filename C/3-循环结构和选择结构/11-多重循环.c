#include <stdio.h>
/**
 * 多重循环
 * @return
 */
int main() {
   // 定义判断变量
    int retry;

    // do语句
    do{
        // 定义变量
        int i, no;
        do{
            printf("请输入一个整数:");
            scanf("%d", &no);

            // 条件判断
            if(no <= 0){
                puts("请不要输入非正整数");
            }
        }while (no <= 0);

        // 条件遍历
        for(i=1; i <= no; i++){
            putchar('*');
        }
        putchar('\n');

        printf("是否继续执行？[Yes...0/No..9]:");
        scanf("%d", &retry);
    }while (retry == 0);
    return 0;
}
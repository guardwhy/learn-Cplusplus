#include <stdio.h>
/**
 * 不含形参的函数
 * @return
 */

// 返回显示输入的正整数
int scan_print(void){
    // 临时变量
    int tmp;
    do{
        printf("请输入一个整数:");
        scanf("%d", &tmp);
        if(tmp <= 0)
            puts("请不要输入非正整数。");
    }while (tmp<=0);
    return tmp;
}

// 返回正整数倒转后的值
int rev_int(int num){
    // 设定临时变量
    int tmp = 0;
    if(num > 0){
        do{
            tmp = tmp * 10 + num % 10;
            num /= 10;
        }while (num > 0);
    }
    return tmp;
}

int main() {
    // 定义变量
    int nx = scan_print();
    printf("该整数倒转后的值是%d.\n", rev_int(nx));
    return 0;
} 
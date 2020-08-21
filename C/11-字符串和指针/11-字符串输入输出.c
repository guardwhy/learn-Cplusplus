#include <stdio.h>
#include <string.h>
/**
 * 字符串输入输出
 * @return
 */
int main() {
    // 定义字符串数组
    char username[20],password[20];
    // 定义标志
    int flag = 0;
    // 定义计数器变量
    int count = 0;

    // 条件循环
    while (1){
        printf("请输入用户名:");
        gets(username);
        printf("请输入密码: ");
        gets(password);

        // 条件判断
        if(strcmp(username, "guardwhy") == 0 && strcmp(password, "123") == 0){
            flag = 1;
            break;
        } else{
            printf("用户名或者密码错误 \n");
        }

        // 计数器
        count++;
        if(count == 3)
            break;
    }

    // 条件判断
    if(flag == 1){
        printf("恭喜你,你已经成功的登录你的账号\n");
    } else{
        printf("请在规定时间以后再次登录\n");
    }
    return 0;
}
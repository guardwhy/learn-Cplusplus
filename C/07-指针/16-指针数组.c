#include <stdio.h>
/**
 * 指针数组
 * @return
 */
int main() {
    // 创建指针数组
    char *names[] = {"Java", "Python", "Html","CSS", "C++", "Go"};

    // 遍历数组
    for(int i=0; i<sizeof(names)/sizeof(names[0]); i++){
        printf("%s\n", names[i]);
    }
    return 0;
}
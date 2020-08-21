#include <stdio.h>
#include <string.h>
/**
 * 指针数组排序
 * @return
 */
int main() {
    // 创建指针数组
    char *names[] = {"Java", "Python", "Html","CSS", "C++", "Go"};
    // 数组元素的个数
    int n = (sizeof(names)/sizeof(names[0]));
    // 遍历数组
    for(int i=0; i<n-1; i++){
        // 设置为空NULL
        char *temp = NULL;
        for(int j=0; j<n-1-i; j++){
            if(strcmp(names[j], names[j+1])>0){
                temp = names[j];
                names[j] = names[j+1];
                names[j+1] = temp;
            }
        }
    }

    // 遍历数组
    for(int i=0; i<sizeof(names)/sizeof(names[0]); i++){
        printf("%s\n", names[i]);
    }
    return 0;
}
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * 随机函数
 * @return
 */
int main() {
    // 调用函数
    srand(time(NULL));
    for(int i=0; i<10; i++){
        printf("%d\n", rand()%100);
    }
    return 0;
}
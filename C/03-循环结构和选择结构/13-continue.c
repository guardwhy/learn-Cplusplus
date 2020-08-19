#include <stdio.h>
/**
 * continue关键字
 * @return
 */
int main() {
    for(int i=0; i<=100; i++){
        // 条件判断
        if(i%3 != 0)
            continue;
        printf("%d\n", i);
    }
    return 0;
}
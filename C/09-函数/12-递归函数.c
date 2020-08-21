#include <stdio.h>
/**
 * 递归推算年龄
 * @return
*/

int getAge(int idx){
    if(idx == 1)
        return 10;
    else
        return getAge(idx - 1) + 2;
}

int main() {
    // 定义年龄变量
    int age = getAge(5);
    printf("第五个人的年龄是%d\n", age);
    return 0;
}
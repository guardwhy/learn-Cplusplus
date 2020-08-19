#include <stdio.h>
/**
 * 枚举类型
 * @return
 */

// 枚举类型
enum animal{Dog, Cat, Monkey, Invalid};

// dog
void dog(void){
    puts("狗咬皮球..");
}
// cat
void cat(void){
    puts("猫吃鱼..");
}
// monkey
void monkey(void){
    puts("猴吃桃子..");
}

/**
 * 选择动物
*/
enum animal select(void){
    int temp;
    do{
        printf("0...狗 1...猫 2...猴 3..结束:");
        scanf("%d", &temp);
    }while (temp < Dog || temp > Invalid);
    return temp;
}
int main() {
    enum animal selected;
    do{
        switch (selected = select()) {
            case Dog: dog();
                break;
            case Cat: cat();
                break;
            case Monkey: monkey();
                break;
        }
    }while (selected != Invalid);
    return 0;
}
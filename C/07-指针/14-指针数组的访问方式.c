#include <stdio.h>
/**
 * 指针访问方式
 * @return
 */
int main() {
    /**
     * 方式一:
     */

    // 定义初始化数组
    int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // 输出结果
    printf("array = %p\n", array);  // array代表首元素地址
    printf("&array[0] = %p\n", &array[0]);  // array[0]就是数组的首元素
    printf("*************\n");

    int *p = array;
    // 遍历数组
    for(int i=0; i<10; i++){
        printf("array[%d]=%d\n", i, *(p+i));
    }

    /**
     * 方式二:
     */
     printf("-----------------\n");
     for(int i=0; i<10; i++){
         printf("array[%d] = %d\n", i, *p);
         p++;
     }
     printf("******************\n");

     /**
      * 方式三:
      */
      p = array;
      for(int i=0; i<10; i++){
          //printf("array[%d] = %d\n",i,*p++);
          printf("array[%d] = %d\n", i, *(p++));
      }
    return 0;
}
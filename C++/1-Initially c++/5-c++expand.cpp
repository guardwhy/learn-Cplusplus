#include <cstdlib>
#include <iostream>
/**
 * c++��c���Ե���ǿ����չ
 */
using namespace std;

// 1.ȫ�ֱ�������ǿ
int a;
// int a = 10; a�ض���

// 2.��ȡ�����ε����
int getArea(int w, int l){
    return w * l;
}

/**
 * ���������ǿ  ����ֵ�����ǿ  �β����ͼ����ǿ  ����ʱ��������������ǿ
 */
 // ����test01()����
void test1(){
    // getArea(10, 12, 13); �����������
}

/**
 * ����ת������ǿ
 * @return
 */
 // ����test02()����
 void test2(){
     // ָ���������ͱ���һ�������ܸ�ֵ
     int * str = (int *)malloc(sizeof(int)* 8);
 }

 /**
  * struct��ǿ
  * @return
  */
  // ��C++������,�����ڽṹ���зź���
  struct Student{
      int age;
      void function(){
          age++;
      }
  };

  // ����test03()����
  void test03(){
      // ��C++���� �����ṹ�������ʱ��,���Լ򻯹ؼ���struct
      Student st;
      st.age = 17;
      st.function();
      cout << "ѧ����������:" << st.age << endl;
  }

  /**
   * bool�������͵���չ,C++��������bool��������,������ͼ�
   * @return
   */
   bool flag;
   void test04(){
       // bool����ռ��һ���ֽ�
       cout << "bool����ռ��"<< sizeof(bool) << "�ֽ�" << endl;
       // �� true(1) �� false(0)
       flag = true;
       cout << flag << endl;
   }

   /**
    * ��Ŀ�������ǿ
    * C++������ ��Ŀ��������ص��Ǳ��������Լ�����ֵ
    * @return
    */

   void test05(){
       // �������
       int a = 10;
       int b = 20;
       // printf("a > b ? a : b = %d\n", a > b ? a : b);

       (a > b ? a : b) =100; // b = 100   �������� ��֤����������
       cout << "a = " << a << endl; // 10
       cout << "b = " << b << endl; // 100
   }

   /**
    * const��ǿ
    * @return
    */
    // ����ȫ�ֱ���
    const int const_A = 10;
    // ��������
    void test06(){
        /**
         * ȫ�ֱ����ܵ��������ı���,�޷��޸�
         */
        // const_A = 1000;

        /*
        int* p = (int *)&const_A;
        *p = 100;
        cout << "const_A��ֵ:"<< const_A<< endl;
        */

        // ����ֲ�����
        const int const_B = 20;
        int *p = (int*)&const_B; // ����޸�Ҳʧ�ܡ�
        *p = 200;
        // ������
        cout << "const_B��ֵ��"<< const_B << endl;
    }

int main() {
    printf("hello world!!!\n");
    // ���ú���
    // test03();
    // test04();

    // test05();

    test06();
    return 0;
}
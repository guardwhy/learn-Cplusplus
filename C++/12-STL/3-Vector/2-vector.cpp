#include <iostream>
#include <vector>

using namespace std;

// ����
void printVector(vector<int>&v){
    // ����
    for(vector<int>:: iterator it = v.begin(); it != v.end(); it++){
        cout << *it << " ";
    }
    cout << endl;
}

/**
 * ��ֵ����
 * @return
 * vector���ø�ֵ����
    assign(beg, end);//��[beg, end)�����е����ݿ�����ֵ������
    assign(n, elem);//��n��elem������ֵ������
    vector& operator=(const vector  &vec);//���صȺŲ�����
    swap(vec);// ��vec�뱾���Ԫ�ػ�����
 */
//��������
void test01(){
    // ��������,��������v1
    int arr[] = {1,2,3,4,5,6};
    cout << "v1��ֵ:" << endl;
    vector<int> v1(arr, arr+sizeof(arr) / sizeof(int));

    // ��������v2
    vector<int> v2;
    // ��ֵ
    v2 = v1;
    cout << "v2��ֵ:" << endl;
    printVector(v2);

    // ��������v3
    vector<int> v3;
    v3.assign(v2.begin(), v2.end());
    cout << "v3��ֵ:" << endl;
    printVector(v3);

    // ��������v4
    vector<int> v4(10, 100);
    cout << "v4��ֵ:" << endl;
    printVector(v4);

    cout << "v3��v4������: " << endl;
    v3.swap(v4);
    printVector(v3);
    printVector(v4);
}
int main() {
    // ���ú���
    test01();
    return 0;
}
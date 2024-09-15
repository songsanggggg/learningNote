#include <iostream>
using namespace std;

void test_2d_array(int mat[][3], size_t rows, size_t cols);

int main()
{
    // 数组
    /*     int num_array1[5];
        int num_array2[5] = {1, 2, 3, 4, 5};
        for (int i = 0; i < 5; i++)
        {
            cout << "num_array1:" << num_array1[i] << endl;
            cout << "num_array2:" << num_array2[i] << endl;
        }
    */

    // 变长数组
    /*     int len = 1;
        while (len < 10)
        {
            int arrays[len];
            cout << "len = " << len << endl;
            cout << sizeof(arrays) << endl;
            len++;
        } */

    // 多维数组
    /*     int mat[2][3] = {{1, 2, 3}, {4, 5, 6}};
        test_2d_array(mat, 2, 3); */

    // const arrays
    const array2 = {1, 2, 3};
    // array2[2] = 3; //error

    return 0;
}

void test_2d_array(int mat[][3], size_t rows, size_t cols)
{
    //{ code }
}
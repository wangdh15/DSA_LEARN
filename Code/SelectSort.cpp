/*
 * SelectSort.cpp
 *
 *  Created on: Aug 3, 2018
 *      Author: wangdh
 */
#include <iostream>

using namespace std;

void SelectSort(int *A, int size)
{
    for (int last = size; last != 1; last--) //记录要找到正确元素的位置
    {
        int flag = 0;
        for (int i = 1; i < last; i++) //寻找前面所有元素中最大的元素
        {
            if (A[flag] <= A[i])
                flag = i;
        }
        int temp; //将其与最后一个元素交换
        temp = A[flag];
        A[flag] = A[last - 1];
        A[last - 1] = temp;
    }
    return;
}
int main()
{
    int A[10] = {1, 4, 2, -1, 9, 12, -20, 100, 23, 100};
    SelectSort(A, 10);
    for (int i = 0; i < 10; i++)
        cout << A[i] << endl;
    return 0;
}

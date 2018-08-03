/*
 * InsertSort.cpp
 *
 *  Created on: Aug 3, 2018
 *      Author: wangdh
 */

#include <iostream>

using namespace std;

void InsertSort(int *A, int size)
{
    for (int i = 1; i < size; i++)
    {
        int temp; //保存最后一个元素的副本
        temp = A[i];
        for (int j = i - 1; 0 <= j; j--)
        {
            if (A[j] > temp) //如果当前元素比最后一个元素大，那么就将其向后移一位
                A[j + 1] = A[j];
            else //否则，就将最后一个元素放到其正确位置上
            {
                A[j + 1] = temp;
                break;
            }
            if (j == 0) //如果所有元素都比最后一个元素大，那么将最后一个元素放到第一个
                A[0] = temp;
        }
    }
}
int main()
{
    int A[10] = {-1, 2, -4, 10, 2, 100, 32, 45, 212, -1000};
    InsertSort(A, 10);
    for (int i = 0; i < 10; i++)
        cout << A[i] << endl;
    return 0;
}

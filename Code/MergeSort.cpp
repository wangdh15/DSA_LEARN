/*
 * MergeSort.cpp
 *
 *  Created on: Aug 3, 2018
 *      Author: wangdh
 */

#include <iostream>
using namespace std;

void Merge(int *A, int lo, int mi, int hi)
{
    int *temp = new int[mi - lo]; //将前边一部分copy一份
    for (int i = lo; i < mi; i++)
    {
        temp[i - lo] = A[i];
    }
    for (int i = 0, j = mi, k = lo; i < (mi - lo) || j < hi;) //进行合并，i指向前一部分未合并的最小值，j指向后一部分未合并的最小值。
    {
        if (hi <= j || ((i < (mi - lo)) && (temp[i] <= A[j]))) //若j越界或者i未越界且temp[i] <= A[j] ,则讲temp[i]合并到最终序列中
            A[k++] = temp[i++];
        //else if ((mi-lo) <= i|| A[j] < temp[i])
        else //否则，讲A[j]合并。
            A[k++] = A[j++];
    }
    return;
}

void MergeSort(int *A, int lo, int hi)
{
    if ((hi - lo) == 1)
        return;
    int mi = (lo + hi) / 2; //求出中点
    MergeSort(A, lo, mi);   //递归调用排序算法
    MergeSort(A, mi, hi);
    Merge(A, lo, mi, hi); //将两个有序的合并
    return;
}

int main()
{
    int A[10] = {1, 3, 2, -1, 9, 23, -100, 43, 2, 7};
    MergeSort(A, 0, 10);
    for (int i = 0; i < 10; i++)
        cout << A[i] << endl;
    return 0;
}
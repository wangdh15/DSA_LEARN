/*
 * BubbleSort.cpp
 *
 *  Created on: Aug 3, 2018
 *      Author: wangdh
 */

#include <iostream>

using namespace std;

void BubbleSort(int *A, int size)
{
    for (int last = size - 1; 0 < last;)
    {
        bool sorted = true; //设置变量判断当前扫描是否有序
        int last_temp;      //设置变量记录当前扫描最后一次交换的位置
        for (int j = 0; j <= last - 1; j++)
        {
            if (A[j] > A[j + 1])
            {

                int temp;
                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
                last_temp = j;  //记录当前扫描最后一次交换的位置
                sorted = false; //设置sorted为false
            }
        }
        if (sorted == true)
            break;        //如果已经有序，则终止
        last = last_temp; //将最后一次扫描的位置作为最后的位置
    }
}

int main()
{
    int A[10] = {3, 2, 1, 4, 5, -1, -10, 100, -1000, 90};
    BubbleSort(A, 10);
    for (int i = 0; i < 10; i++)
        cout << A[i] << endl;
    return 0;
}

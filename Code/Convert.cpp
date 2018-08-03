/*
 * Convert.cpp
 * 数的进制转化
 *  Created on: Aug 3, 2018
 *      Author: wangdh
 */

#include <iostream>
#include <stack>
using namespace std;

void Convert(stack<char> &S, int n, int base)
{
    char digit[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'}; //输出的列表
    while (n > 0)
    {
        S.push(digit[n % base]); //将对应的字符压入栈中
        n /= base;               //用商更新
    }
    return;
}

int main()
{
    int n = 32;
    stack<char> S;
    Convert(S, n, 3);
    while (!S.empty())
    {
        cout << S.top(); //将栈顶输出
        S.pop();         //将栈顶元素弹出
    }
}

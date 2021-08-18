//空指针的学习

#include<iostream>
using namespace std;
int main()
{
    int *p = NULL;  //空指针用于给指针变量进行初始化
    // int a = 100;
    *p = 100;
    cout<<*p<<endl;//什么都没有输出
}
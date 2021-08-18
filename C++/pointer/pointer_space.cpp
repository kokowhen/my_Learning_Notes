//指针所占内存空间的学习

#include<iostream>
using namespace std;
int main()
{
    int a = 10;
    int *p; //指针变量自身占用的内存情况：32位占4个字节；64位占用8个字节
    p = &a;
    cout<<"sizeof(int *)="<<sizeof(p)<<endl;
    cout<<"sizeof(double *)="<<sizeof(double *)<<endl;
}
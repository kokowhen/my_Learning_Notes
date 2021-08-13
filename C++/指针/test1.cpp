//初识指针
//取址运算符&和间接访问运算符*

#include<iostream>
using namespace std;
int main()
{
    int a=5;
    double b=2.44;
    cout<<&a<<endl;//返回a的存储地址
    cout<<&b<<endl;//返回b的存储地址
    cout<<*(&a)<<endl;//返回变量a存储的值
    cout<<*(&b)<<endl;//返回变量b存储的值
    return 0;
}
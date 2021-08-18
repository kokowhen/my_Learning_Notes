//函数分文件编写的学习
//这是源文件
//实现两个整数进行相加并返回结果功能的函数

#include<iostream>
#include"function_mul_files.hpp"
using namespace std;
//源文件进行函数的定义
int add(int num1,int num2)
{
    int result = num1 + num2;
    return result;
}
int main()
{
    int r = add(10,29);
    cout<<"result="<<r<<endl;
}
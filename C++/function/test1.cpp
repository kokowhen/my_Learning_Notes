//函数的作用，对某段代码进行封装，实现功能
//通过函数实现加法的功能

#include<iostream>
using namespace std;
//函数的定义
int add(int num1 , int num2)
{
    int sum = num1 + num2;//num1和num2并没有实际的值，是形参
    return sum;
}
//函数的调用
int main()
{
    int a,b;
    cout<<"请输入两个整数："<<endl;
    cin>>a>>b;
    cout<<endl;
    int c = add(a,b);//a和b是实际的参数，简称实参
    cout<<"sum="<<c<<endl;
}
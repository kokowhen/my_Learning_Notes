//写一个能够进行加减乘除运算的程序

#include<iostream>
using namespace std;
//声明加法函数
double sum(double num1,double num2)
{
    double sum = num1 = num2;
    return sum;
}
//声明减法函数
double sub(double num1,double num2)
{
    double sub = num1 - num2;
    return sub;
}
//声明乘法函数
double mul(double num1,double num2)
{
    double mul = num1 * num2;
    return mul;
}
//声明除法函数
double div(double num1,double num2)
{
    double div = num1/num2;
    return div;
}
//调用计算函数
int main()
{
    double a = sum(10.88,80.9);
    double b = sub(28.22,44.66);
    double c = mul(39.3,44.5);
    double d = div(10.557,5.0);
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
    cout<<d<<endl;
    return 0;
}
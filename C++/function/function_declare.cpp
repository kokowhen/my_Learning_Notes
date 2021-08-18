//函数声明的学习
//比较函数，实现两个整型数字进行比较，返回较大的值
#include<iostream>
using namespace std;
//声明
int m(int num1,int num2);//我想在主函数之后定义自己的函数，若想调用成功，就必须在主函数前面进行自己函数的声明

//主函数
int main()
{
    int a = 10;
    int b = 20;
    int c =  m(a,b);
    cout<<c<<endl;
    return 0;
}
//定义
int m(int a,int b)
{
    if(a>=b)
    {
        return a;
    }
    else return b;
}
//主函数
// int main()
// {
//     int a = 10;
//     int b = 20;
//     int c =  max(a,b);
//     cout<<c<<endl;
//     return 0;
// }
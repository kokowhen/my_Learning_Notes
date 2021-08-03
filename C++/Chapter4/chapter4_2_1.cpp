#include<iostream>
using namespace std;
//输入一个小于9位数的整数，将其反向排序后输出
int main()
{
    int a,b;
    while (1)
    {
    cout<<"Please input an integer:";
    cin>>a;
    cout<<"The reversed number is:";
    while (a!=0)//注意循环条件里的表达式初值必须是前段语句已经存储了的，不能从后段语句里传递初值；所有个位数和10取余数都是等于0
    {
        b=a%10;//求出当前a值的个位数
        a/=10;//右移一位，相当于去掉右移的个位数
        cout<<b;
    }
    cout<<endl;
    }
    return 0;
}
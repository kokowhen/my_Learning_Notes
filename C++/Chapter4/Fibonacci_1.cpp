#include<iostream>
using namespace std;
//设计程序输出Fibonacci数列的前20项，每行输出5个数据：for循环实现

int main()
{
    int i;
    int fib1=0,fib2=1,fib3;
    cout<<fib1<<'\t'<<fib2<<'\t';
    for ( i = 3; i <= 20; i++)//i<=20的话i=20也满足；i<20的话20不满足
    {
        fib3=fib1+fib2;
        fib1=fib2;
        fib2=fib3;
        cout<<fib3<<'\t';
        if (i%5==0)
        {
            cout<<endl;
        }
        
    }
    cout<<endl;
    return 0;
}
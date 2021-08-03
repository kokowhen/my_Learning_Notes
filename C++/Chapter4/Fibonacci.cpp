#include<iostream>
using namespace std;
//设计程序输出Fibonacci数列的前20项，每行输出5个数据

int main()
{
    int fib1=0,fib2=1,fib3;
    int i=2;
    cout<<fib1<<'\t'<<fib2<<'\t';
    while (i<20)
    {
        //递推的思想
        
        fib3=fib1+fib2;
        fib1=fib2;
        fib2=fib3;//更新数据
        if (i%5==0)
        {
            cout<<endl;
        }
        cout<<fib3<<'\t';
        i++;
        
    }
    cout<<endl;
    return 0;
}
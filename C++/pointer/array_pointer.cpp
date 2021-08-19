//数组和指针的学习

#include<iostream>
using namespace std;

int main()
{
    const int N = 10;
    int a[N];
    for (int i = 0; i < 10; i++)
    {
        a[i] = i;
    }
    
    //用指针访问数组中的每一个元素

    int *p = a; //注意不用取址符&
    for (int i = 0; i < 10; i++)
    {
        cout<<"a["<<i<<"]的地址为"<<p<<"\t";
        cout<<"a["<<i<<"]的值为"<<*p<<endl;
        p++;
    }
}
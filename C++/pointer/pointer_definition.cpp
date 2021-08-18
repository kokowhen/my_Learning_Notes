//学习定义指针和使用指针

#include<iostream>
using namespace std;

int main()
{
    int a = 100;
    //定义一个指针
    int *p;
    //使用指针
    //让指针记录变量a的地址
    p = &a;
    cout<<p<<endl;
    //指针前加*代表解引用，找到指针指向内存的数据
    cout<<*p<<endl;
}
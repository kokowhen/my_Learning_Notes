#include<iostream>
using namespace std;

int main()
{
    int x=3,y=4,z=5,a,b;
    cout<<"输出x值："<<x<<endl;
    cout<<"输出y值："<<y<<endl;
    a=x++;//后置自增应该是赋增加前的值
    cout<<"a="<<a<<endl;
    cout<<"behind x++,x="<<x<<endl;
    cout<<"x++="<<x++<<endl;
    y++;
    cout<<"behind y++,y="<<y<<endl;
    cout<<"y++="<<y++<<endl;
    b=++z;//前置自增应该是赋增加后的值
    cout<<"b="<<b<<endl;
    cout<<"behind ++z,z="<<x<<endl;
    cout<<"++z="<<++x<<endl;

    return 0;
}
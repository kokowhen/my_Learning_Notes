#include<iostream>
using namespace std;
//输入10个圆的半径，分别求其面积
//用for循环实现
int main()
{
    const double PI=3.1415;
    double r,s;
    int i;
    for (i = 1; i <= 10; i++)
    {
        cout<<"请输入第"<<i<<"个圆的半径：";
        cin>>r;
        s=PI*r*r;
        cout<<"第"<<i<<"个圆的面积"<<"s="<<s<<"."<<endl;
    }
    
    return 0;
}
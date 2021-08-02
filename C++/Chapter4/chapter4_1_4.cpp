#include<iostream>
using namespace std;
//用do-while循环实现输入正数半径求面积，不是正数就反复输入直到是正数为止，总共给三次输入机会，三次过后还没输入正确就输出错误
int main()
{
    const double PI=3.1415;
    double r,s;
    int i=0;
    do
    {
    cout<<"请输入半径r=";
    cin>>r;
    i++;//计数器
    } while (r<=0&&i<3);
    if (r>0)
    {
    s=PI*r*r;
    cout<<"圆的面积s="<<s<<endl;
    }
    else cout<<"输出错误"<<endl;
    
    return 0;
} 
    
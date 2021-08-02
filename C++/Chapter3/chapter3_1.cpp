#include<iostream>
using namespace std;
//计算圆的面积，如果半径大于0就输出面积值，半径小于等于0就输出错误
int main()
{
    const double PI = 3.1415;
    double r,s;//定义半径和面积为double型
    cout<<"Please input the radius:";
    cin>>r;
    if (r>0)
    {
        s=PI*r*r;
        cout<<"s="<<s<<endl;
    }
    else cout<<"Please input the correct value."<<endl;
    return 0;
}


#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    const double PI=3.1415;//定义常量
    double r,s;
    //r = 10;
    cout<<"Please input the radius:";
    cin>>r;//看作是键盘
    s = PI*r*r;
    cout<<"s="<<fixed<<setprecision(2)<<s<<"\n";//保留小数点后两位
    return 0;
}
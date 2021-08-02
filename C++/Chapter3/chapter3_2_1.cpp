#include<iostream>
using namespace std;
//利用程序实现分段函数的功能
int main()
{
    double x,y;
    cout<<"Please input a number x:";
    cin>>x;
    if (x<-5)
    {
        y=x;
    }
    else if (x<1)
    {
        y=2*x+5;
    }
    else if (x<4)
    {
        y=x+6;
    }
    else y=3*x-2;
    cout<<"y="<<y<<endl;
    return 0;
}
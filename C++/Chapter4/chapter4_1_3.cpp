#include<iostream>
using namespace std;
//用while循环实现输入正数半径求面积，不是正数就反复输入直到是正数为止
int main()
{
    const double PI=3.1415;
    double r,s;
    cout<<"请输入半径值r=";
    cin>>r;
    if (r<=0)
    {
        while (1)
        {
            cout<<"请重新输入正确的半径值：";
            cin>>r;
        }
        
    }
    else
    {
        s=PI*r*r;
        cout<<"第圆的面积"<<"s="<<s<<"."<<endl;
    }
    return 0;
    
}
//我们发现，用while循环是不能实现这个循环的功能的，因为while循环一直都为真没法跳出来
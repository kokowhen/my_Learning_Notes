#include<iostream>
using namespace std;
//输入10个圆的半径(都为正数)，输出各自的面积，在最后输出最大面积的圆的半径和面积
int main()
{
    const double PI=3.1415;
    double r,s,rmax=0,smax;
    int i;
    for ( i = 1; i <= 10; i++)
    {
        cout<<"Please input radius:";
        cin>>r;
        while (rmax<r)
        {
            rmax=r;
        }
        s=PI*r*r;
        smax=PI*rmax*rmax;
        cout<<"s"<<i<<"="<<s<<endl;
    }
    cout<<"rmax="<<rmax<<""<<"\t"<<"smax="<<smax<<endl;
    return 0;
}
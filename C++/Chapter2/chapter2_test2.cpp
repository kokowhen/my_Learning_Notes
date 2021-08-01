//输入一个正三位数，对其逆序输出，如果前几位是0则忽略
#include<iostream>
using namespace std;

int main()
{
    int pn,a,b,c;
    cout<<"Please input a three positive number:";
    cin>>pn;
    a=pn/100;//拆分出百位
    b=pn/10%10;//拆分出十位
    c=pn%10;//拆分出个位
    if (b!=0&&c!=0)//stupid methods
    {
        cout<<"It's reverse output is:"<<c<<b<<a<<endl;
    }
    if (b==0&&c!=0)
    {
        cout<<"It's reverse output is:"<<c<<a<<endl;
    }
    if (c==0&&b!=0)
    {
        cout<<"It's reverse output is:"<<b<<a<<endl;
    }
    if (b==0&&c==0)
    {
        cout<<"It's reverse output is:"<<a<<endl;
    }
    return 0;
}
#include<iostream>
using namespace std;
//输入一个正整数m，判断其是否为素数，for循环实现
int main()
{
    int m,i;
    while (1)
    {
    cout<<"Please input a positive integer:";
    cin>>m;
    if (m>2)
    {
        for ( i = 2; i <= m-1; i++)
        {
            if (m%i==0) break;
        }
        if (i>m-1) cout<<m<<" is a prime number."<<endl;
        else cout<<m<<" is not a prime number."<<endl;
    }
    else cout<<m<<" is a prime number."<<endl;
    }
    return 0;
}
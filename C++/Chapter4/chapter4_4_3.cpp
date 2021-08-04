#include<iostream>
using namespace std;
//输入一个正整数m，判断其是否为素数，使用标志变量
int main()
{
    int m,i;
    int flag;
    cout<<"Please input a positive integer:";
    cin>>m;
    flag=1;
    for ( i = 2; i <= m-1; i++)
    {
        if (m%i==0) flag=0;break;
    }
    if (flag==1) cout<<m<<" is a prime number."<<endl;
    else cout<<m<<" is not a prime number."<<endl;
    return 0;
    
}
//标志变量的作用？什么情况下适合使用标志变量？
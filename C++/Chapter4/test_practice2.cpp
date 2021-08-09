//输入一个正整数n，求出1~n的所有质数

#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<"Please input a number:";
    cin>>n;
    for(i=2;i<=n;i++)
    {
        if(n%i==0) continue;//
        cout<<i<<endl;
    }
}
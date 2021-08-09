//对一个输入的正整数进行质因分解

#include<iostream>
using namespace std;
int main()
{
    int n,i,j,b=1,c;
    cout<<"Please input a number:";
    cin>>n;
    for(i=2;i<=n-1;i++)
    {
        if(n%i==0) break;
    }
    if(n==i)
    {
        
    }
    return 0;
}
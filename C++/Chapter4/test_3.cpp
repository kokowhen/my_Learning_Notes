//输出a aa aaa ....的数列

#include<iostream>
using namespace std;
int main()
{
    int a,b1=0,b2,n,i=1;
    cout<<"Please input a=";
    cin>>a;
    cout<<"Please input n=";
    cin>>n;
    while (i<=n)
    {
        b2=b1*10+a;
        b1=b2;
        i++;
        cout<<b2<<endl;
    }
    return 0;
}
//求an=n+nn+...+n...n的前n项和

#include<iostream>
using namespace std;
int main()
{
    int i=1,n,a,b1=0,b2;
    int sum=0;
    cout<<"Please input n=";
    cin>>n;
    cout<<"Please input a=";
    cin>>a;
    while (i<=n)
    {
        b2=b1*10+a;
        b1=b2;
        sum=sum+b2;
        i++;
    }
    cout<<"sum="<<sum<<endl;
    return 0;   
}
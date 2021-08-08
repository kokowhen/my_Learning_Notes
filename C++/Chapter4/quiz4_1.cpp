//求数列an=(n+1)/n的前n项和

#include<iostream>
using namespace std;
int main()
{
    int n,i=1;
    double sum=0;
    cout<<"Please input n=";
    cin>>n;
    while (i<=n)
    {
        sum=sum+(i+1.0)/i;
        i++;
    }
    cout<<"sum"<<n<<"="<<sum<<endl;
    return 0;
}
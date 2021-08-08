//求数列an=(n+1)/n的前n项和，用for循环实现

#include<iostream>
using namespace std;
int main()
{
    int i,n;
    double sum=0;
    cout<<"Please input n=";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        sum=sum+(i+1.0)/i;
    }
    cout<<"s"<<n<<"="<<sum<<endl;
    return 0;
}
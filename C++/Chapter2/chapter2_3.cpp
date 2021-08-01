#include<iostream>
using namespace std;

int main()
{   
    int a,b;
    bool f;
    f=(a==b);
    cout<<"Please input two numbers:"<<endl;
    cin>>a>>b;
    cout<<"1=2 is:"<<f<<endl;
    f=(!a);
    cout<<"!a is:"<<f<<endl;
    return 0;
}
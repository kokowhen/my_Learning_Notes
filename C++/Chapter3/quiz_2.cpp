#include<iostream>
using namespace std;
//输入一个整数，判断其是否是3或7的倍数

int main()
{
    int a;
    while (1)
    {
        cout<<"Please input a number:";
        cin>>a;
        if ((a%3==0)&&(a%7==0)) cout<<"3 and 7"<<endl;
        if ((a%3!=0)&&(a%7!=0)) cout<<"not 3 and not 7"<<endl;
        if ((a%3==0)&&(a%7!=0)) cout<<"3 and not 7"<<endl;
        if ((a%3!=0)&&(a%7==0)) cout<<"not 3 and 7"<<endl;
    }
    return 0;
}
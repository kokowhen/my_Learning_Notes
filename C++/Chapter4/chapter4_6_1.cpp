#include<iostream>
using namespace std;
//打印99乘法表
int main()
{
    int i,j,r;
    for ( i = 1; i <= 9; i++)
    {
        for ( j = 0; j < i; j++)
        {
            r=(j+1)*i;
            cout<<j+1<<"*"<<i<<"="<<r<<"\t";
        }
        cout<<"\n";
        
    }
    return 0;
}
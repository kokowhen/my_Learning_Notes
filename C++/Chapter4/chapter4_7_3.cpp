#include<iostream>
using namespace std;
//暴力穷举破解密码
int main()
{
    int i,j,sum;
    for(i=0;i<=9;i++)
    {
        for(j=0;j<=9;j++)
        {
            sum=67008+100*i+10*j;
            if(sum%67==0&&sum%78==0)
            cout<<"密码为："<<sum<<endl;
        }
    }    
return 0;
}
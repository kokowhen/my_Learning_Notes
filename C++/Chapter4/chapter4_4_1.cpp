#include<iostream>
using namespace std;
//输入一个正整数m，判断其是否为素数
int main()
{
    int m,i=2;

    while (1)
    {
    cout<<"请输入一个正整数：";
    cin>>m;

    if (m>2)
    {
        while (i<=m-1)
        {
            if (m%i==0) break;
            i++;
        }
        if (i>m-1) cout<<m<<"是素数。"<<endl;//用i>m-1为真时执行这条语句
        else cout<<m<<"不是素数。"<<endl;//用break跳出循环来执行这条语句
        
    }
    else cout<<m<<"是素数。"<<endl;

    }
    
return 0;
}
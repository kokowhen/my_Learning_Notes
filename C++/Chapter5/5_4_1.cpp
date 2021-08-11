//输入一个整数，判断其是否有重复的数

#include<iostream>
using namespace std;
int main()
{
    int n,n1;
    double a[10]={0};
    cout<<"请输入一个整数：";
    cin>>n;
    do
    {
        n1=n%10;//余数n1的范围是0到9，如果有相同的余数，那么就自增两次，下标的巧用
        a[n1]++;
        n/=10;
    } while (n!=0);
    for (int i = 0; i < 10; i++)
    {
        if(a[i]>1)//下标的巧用，如果a[8]=2，说明余数为8的数有两个，整数里有两个8
        {
            cout<<"有重复。"<<endl;
            // cout<<"重复的数字为："<<i<<endl;
            return 0;
        }
    }
    cout<<"没有重复。"<<endl;
    return 0;
}
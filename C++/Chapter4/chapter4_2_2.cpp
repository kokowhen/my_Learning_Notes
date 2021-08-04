#include<iostream>
#include<cmath>
using namespace std;
//输出所有形如aabb的所有四位完全平方数
int main()
{
    int a,b,c,d,n,i=33;
    cout<<"numbers are:"<<endl;
    while (i<99)//预先判断aabb开方的值存在的区间
    {
        n=i*i;
        a=n/1000;
        b=n/100%10;
        c=n/10%10;
        d=n%10;
        if (a==b&&c==d&&a!=c)//这里犯了一个错误，把sqrt(i)==0当作是判断i是否为完全平方数的条件
        {
         cout<<n<<endl;   
        }
        
        i++;
    }
    return 0;
}
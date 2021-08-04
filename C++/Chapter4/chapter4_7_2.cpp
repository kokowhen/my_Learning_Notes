#include<iostream>
using namespace std;
//从百鸡问题学习穷举法（效率较高的方法）c3直接根据100-i-j就可以算出
int main()
{
    int i,j,k;
    cout<<"百鸡问题的解为："<<endl;
    for(i=0;i<=20;i++)
        for(j=0;j<=33;j++)
        {
            k=100-i-j;
            if ((k%3!=0)||(5*i+j*3+k/3!=100)) continue;
            cout<<i<<"\t"<<j<<"\t"<<k<<endl;
        }
    return 0;
}
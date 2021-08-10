//输入10个整数输出其最大值

#include<iostream>
using namespace std;
int main()
{
    int i,n,max=0,N[10];
    cout<<"Please input numbers:";
    for ( i = 0; i < 10; i++)
    {
        cin>>N[i];//用数组存储输入进来的数据
        max=N[0];
    }
    for ( i = 0; i < 10; i++)
    {
        if(N[i]>max) max=N[i];//找出所有数据元素中的最大值
    }
    for ( i = 0; i < 10; i++)
    {
        cout<<N[i]<<' ';//把所有元素都打印出来，访问数组元素的一般形式
    }
    for ( i = 0; i < 10; i++)//打印最大值
    {
        if(max==N[i]) cout<<"max："<<"N"<<"["<<i<<"]="<<N[i]<<endl;
    }
    return 0;
}
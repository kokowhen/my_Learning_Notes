//对一个指定的数组进行从大到小的排序再进行冒泡排序并输出

#include<iostream>
using namespace std;
int main()
{
    const int n=10;
    int N[n]={12,32,3,1,34,2,44,6,12,0};
    int i,j,t;
    cout<<"排序前："<<endl;
    for ( i = 0; i < 10; i++)
    {
        cout<<N[i]<<"\t";
    }
    //轮数
    for ( i = 1; i < 10; i++)
    {
        //次数
        for ( j = 0; j < 10-i; j++)
        {
            if(N[j]<N[j+1])
            {
                t=N[j+1];
                N[j+1]=N[j];
                N[j]=t;
            }
        }
    }
    //排序完了，新的数组已经存储
    cout<<"\n数组从大到小排序为："<<endl;
    for ( i = 0; i < 10; i++)
    {
        cout<<N[i]<<"\t";
    }
    //冒泡排序
    cout<<"\n冒泡排序为："<<endl;
    for ( i = 1; i < 10; i++)
    {
        for ( j = 0; j < 10-i; j++)
        {
            if(N[j]>N[j+1])
            {
                t=N[j+1];
                N[j+1]=N[j];
                N[j]=t;
            }
        }
    }
    //遍历排序好的数组
    for ( i = 0; i < 10; i++)
    {
        cout<<N[i]<<"\t";
    }
    cout<<endl;  
    return 0;
}
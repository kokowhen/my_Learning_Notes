//冒泡排序练习：对一个数组进行冒泡排序

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
            if(N[j]>N[j+1])
            {
                t=N[j+1];//临时变量，把小的值移到前面
                N[j+1]=N[j];//把大的值移到后面
                N[j]=t;
            }
        }
        
    }
    //排序完了，新的数组已经存储
    cout<<"\n冒泡排序完成："<<endl;
    for ( i = 0; i < 10; i++)
    {
        cout<<N[i]<<"\t";
    }
    return 0;
}
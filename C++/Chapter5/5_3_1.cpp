//对rand函数产出的随机数进行冒泡排序

#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    int i,j,t,N[10];
    cout<<"产生的随机数为："<<endl;
    for ( i = 0; i < 10; i++)//生成10个随机数并存放到数组N[10]里
    {
        N[i]=rand()%1000;
        cout<<N[i]<<"\t";
        if((i+1)%5==0) cout<<"\n";
    }
    for(i = 1; i < 10; i++)//冒泡排序，排序进行9轮
    {
        for ( j = 0; j < 10-i; j++)//冒泡排序，每轮排序进行
        {
            if(N[j]>N[j+1])
            {
                t=N[j+1];
                N[j+1]=N[j];
                N[j]=t;
            }
        }  
    }
    cout<<"排序之后：\n";
    for ( i = 0; i < 10; i++)
    {
        cout<<N[i]<<"\t";
        if((i+1)%5==0) cout<<"\n";
    }
    return 0;
    
}
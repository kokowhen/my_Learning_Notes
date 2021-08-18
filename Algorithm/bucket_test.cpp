//根据桶排序算法对随机生成的10个0~100内的整数进行排序

#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    const int N = 10;
    const int M = 101;
    int a[N];
    int b[M];

    //生成随机数并存储在数组里
    cout<<"before:"<<endl;
    for (int i = 0; i < N; i++)
    {
        a[i] = rand()%100;
        cout<<a[i]<<"\t";
    }
    
    //初始化数组
    for (int i = 0; i < M; i++)
    {
        b[i] = 0;
    }
    
    //读入数据并进行计数
    for (int i = 0; i < N; i++)
    {
        b[a[i]]++;
    }

    //依次判断编号0~100的桶
    cout<<"\n"<<"after"<<endl;
    for (int i = 0; i < M; i++)
    {
        for (int j = 1; j <= b[i]; j++)
        {
            cout<<i<<"\t";
        }
        
    }
    cout<<endl;
    return 0;
}
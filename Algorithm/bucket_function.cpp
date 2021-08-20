//将桶排序的功能封装到函数里

#include<iostream>
using namespace std;

//创建生成数组的函数

void create_Array(int *a,int N)
{
    for (int i = 0; i < N; i++)
    {
        a[i] = rand()%100;
    }
    
    cout<<"Array before bucket_Sort:"<<endl;
    for (int i = 0; i < N; i++)
    {
        cout<<a[i]<<"\t";
    }
    cout<<endl;
    
}

//创建桶排序数组

void bucket_Sort(int *a,int *b,int N)
{
    //初始化桶数组
    for (int  i = 0; i < 101; i++)  //排序的是10个0~100内的整数，需要101个桶
    {
        b[i] = 0;
    }
    
    //计数
    for (int i = 0; i < N; i++)
    {
        b[a[i]]++;
    }
    
    //排序
    for (int i = 0; i < 101; i++)             //外循环遍历桶数组b[i]
    {
        for (int j = 1; j <= b[i]; j++)       //内循环打印桶数组中出现的元素
        {
            cout<<i<<"\t";                  //这里一定不是a[i]或者b[a[i]]
        }
        
    }
    cout<<endl;
}

//主函数

int main()
{
    const int N = 10;
    int a[N];
    int b[101];

    create_Array(a,N);

    bucket_Sort(a,b,N);

    return 0;
}
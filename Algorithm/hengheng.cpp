// 排序+去重

#include<iostream>
using namespace std;

// 全局变量

const int N = 15;
int a[N] = {1,9,12,2,7,88,40,4,1,2,9,40,7,2,88};

// 桶排序函数

void bucketSort(int b[])
{
    //桶数组初始化
    for (int i = 0; i < 100; i++)
    {
        b[i] = 0;
    }
    //计数
    for (int i = 0; i < N; i++)
    {
        b[a[i]] = 1;
    }
    //去重排序
    for (int i = 0; i < 100; i++)
    {
        if (b[i]==1)
        {
            cout<<i<<"\t";
        }
        
    }
    cout<<endl;
}

// 冒泡排序函数

void bubbleSort()
{
    //冒泡排序
    int temp;
    for (int i = 0; i < N-1; i++)
    {
        for (int j = 0; j < N-i-1; j++)
        {
            if (a[j]>a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
            
        }
        
    }
    //去重输出
    for (int i = 0; i < N; i++)
    {
        if (a[i]!=a[i+1])
        {
            cout<<a[i]<<"\t";
        }
        
    }
    cout<<endl;
}

// 快速排序函数

void quickSort(int left,int right)
{
    // 快速排序
    int i,j,t,temp;
    if (left>right)
    {
        return;
    }
    temp = a[left];
    i = left;
    j = right;

    while(i!=j)
    {
        while(a[j]>=temp && i<j)
        {
            j--;
        }
        while(a[i]<=temp && i<j)
        {
            i++;
        }

        if (i<j)
        {
            t = a[i];
            a[i] = a[j];
            a[j] = t;
        }
        
    }
    a[left] = a[i];
    a[i] = temp;

    quickSort(left,i-1);
    quickSort(i+1,right);

    // 去重输出
    for (int i = 1; i <= N; i++)
    {
        if (a[i]!=a[i+1])
        {
            cout<<a[i]<<"\t";
        }
        
    }
    cout<<endl;
}

// 主函数

int main()
{
    // 调用桶排序函数
    int b[100];
    cout<<"The result of bucketSort:"<<endl;
    bucketSort(b);

    // 调用冒泡排序函数
    cout<<"The result of bubbleSort:"<<endl;
    bubbleSort();

    // 调用快速排序函数
    cout<<"The result of quickSort:"<<endl;
    quickSort(1,N);

    system("pause");
    return 0;
}
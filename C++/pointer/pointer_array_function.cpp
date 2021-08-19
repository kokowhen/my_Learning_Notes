//指针、数组、函数结合使用
//封装一个函数，利用冒泡排序，实现对数组的冒泡排序

#include<iostream>
using namespace std;

//把冒泡排序的功能封装在函数里

void bubbleSort(int *a,int N)
{
    //冒泡排序循环体
    for (int i = 1; i <= N-1; i++)
    {
        for (int j = 0; j < N-i; j++)
        {
            if (a[j]>a[j+1])
            {
                int temp;
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
            
        }
        
    }
}

//创建函数打印排序好的数组

void prinf_result(int *a,int N)
{
    for (int i = 0; i <N ; i++)
    {
        cout<<a[i]<<"\t";
    }
    cout<<endl;
}

//主函数

int main()
{
    const int N = 10;
    int a[N] = {132,234,313,55,42,556,456,33,3,0};
    //调用冒泡排序函数
    bubbleSort(a,N);
    prinf_result(a,N);
    return 0;
}
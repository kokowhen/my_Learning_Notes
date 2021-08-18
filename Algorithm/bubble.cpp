//冒泡排序

#include<iostream>
using namespace std;

int main()
{
    const int N = 5;
    int a[N];
    int n;
    int tem;
    cout<<"Please input 5 numbers:"<<endl;
    //输入数据并存放到数组a中
    for (int i = 0; i < 5; i++)
    {
        cin>>n;
        a[i] = n;
        cout<<a[i]<<"\t";
    }
    cout<<"\n";

    //进行冒泡排序
    for (int i = N; i > 0; i--)  //外循环控制冒泡排序的趟数
    {
        for (int j = 0; j < N-1; j++)   //内循环控制每趟比较的次数
        {
            if (a[j]>a[j+1])
            {
                tem = a[j];
                a[j] =a[j+1];
                a[j+1] =tem;
            }
            
        }
        
    }
    
    //打印排序好的数组
    for (int i = 0; i < N; i++)
    {
        cout<<a[i]<<"\t";
    }
    cout<<endl;
    system("pause");
    return 0;
}
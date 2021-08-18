//初识简化版的桶排序

#include<iostream>
using namespace std;

int main()
{
    const int N = 11;
    int a[N];
    int t;

    for (int i = 0; i <= 10; i++)
    {
        a[i] = 0;//初始化数组
    }

    //循环读入5个数
    cout<<"Please input 5 numbers in 0~10:"<<endl;
    for (int i = 0; i < 5; i++)
    {
        cin>>t;
        a[t]++;
    }

    for (int i = 0; i <= 10; i++)
    {
        for (int j = 1; j <= a[i]; j++) //没有数据读入的a[i]都等于0，不会执行内循环体内的程序
        {
            cout<<i<<"\t";              //出现几次就打印几次
        }
        
    }
    cout<<endl;
    system("pause");
    return 0;
    
    
}
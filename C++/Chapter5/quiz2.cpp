//在一堆数据中，查找特殊数据及其所处位置信息

#include<iostream>
using namespace std;
int main()
{
    const int N = 10;
    int a[N],n,sn,i,j=0;
    //输入数据存放到数组a[10]中
    cout<<"Please input the numbers:"<<endl;
    for(int i = 0; i < 10; i++)
    {
        cin>>n;
        a[i]=n;
    }
    //输入查找的数字
    cout<<"Please input the searching number:"<<endl;
    cin>>sn;
    for(int i = 0; i < 10; i++)
    {
        if(sn==a[i]) 
        {
            cout<<i+1<<endl;
        }
        j++;
    }
    if(j==10) cout<<"no such number."<<endl;
    return 0;
}
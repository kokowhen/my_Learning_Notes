//拆分查找（二分查找）
//查找的数据必须是排序好的

#include<iostream>
using namespace std;
int main()
{
    int a[11];
    int i,key;
    for(i=0;i<=10;i++)//生成一个从大到小排序的数组a[10]
    {
        a[i]=i+4;
        cout<<a[i]<<"\t";
    }
    while(1)
    {
    cout<<"\nPlease input the searching number:";
    cin>>key;
    int low=0,high=10,mid,find;//通过指针low和high去求mid
    while (low<=high)//如果一直查不到，那么low一定会比high大，要么是low增大所致，要么是high减小所致
    {
        mid=(low+high)/2;
        if(key==a[mid])
        {
            find=1;//查找到key值的标志
            break;
        }
        else if(key>a[mid])
        {
            low=mid+1;
        }
        else if(key<a[mid])
        {
            high=mid-1;
        }
    }
    if(find==1) cout<<mid<<endl;
    else cout<<"no such number here."<<endl;
    }
    return 0;
}
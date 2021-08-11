//顺序查找，在数组里多存放一个数据
//生成一个一维随机数组，顺序查找数据
#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    const int n=11;
    int N[n];
    int i,key;
    cout<<"the array is:\n";
    for ( i = 1; i < 11; i++)//生成随机数组
    {
        N[i]=rand()%100;
        cout<<N[i]<<"\t";
    }
    cout<<"\n";
    cout<<"Please input the searching number:";
    cin>>key;
    N[0]=key;//多出来的数字就是要查找的，存入到N[0]里
    for ( i = 10; i >0; i--)//从数组的最后往前查
    {
        if(N[i]==key) break;//如果查到数字就跳出循环
    }
    if(i==0) cout<<"There is no such number in this array."<<endl;//根据i的输出值去判断程序进行了多少次
    else cout<<"The under remark is:"<<i<<endl;
    return 0;
}
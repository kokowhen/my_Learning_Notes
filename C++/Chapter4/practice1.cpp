//输入若干不为零的数字，输入零结束，输出其最大值和平均值

#include<iostream>
using namespace std;
int main()
{
    int n=1,i=1,ave=0,max;
    cout<<"Please input numbers:";
    while (n!=0)
    {
        cin>>n;
        ave=(ave+n)/i;
        i++;
    }
    cout<<ave;
    return 0;
}
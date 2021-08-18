//快速排序

#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
    const int N = 10;
    int a[N];
    
    //生成随机数并赋给数组a
    for (int i = 0; i < 10; i++)
    {
        a[i] = rand()%10;
        cout<<a[i]<<"\t";
    }
    cout<<endl;
}
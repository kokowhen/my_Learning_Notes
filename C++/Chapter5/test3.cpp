//判断a[10]={0}的赋值效果

#include<iostream>
using namespace std;
int main()
{
    int a[10]={0};
    int i;
    for ( i = 0; i < 10; i++)
    {
        cout<<a[i]<<"\t";
    }
    return 0;
}
//数组里的所有元素都是0
#include<iostream>
using namespace std;
//输出0~100内3的倍数
int main()
{
    int i;
    for ( i = 0; i <= 100; i++)
    {
        if (i%3!=0) continue;
        cout<<i<<endl;
    }
    
    return 0;
}
//continue和break的用法比较？
#include<iostream>
using namespace std;
//猴子吃桃的问题，倒推的思想，while循环实现

int main()
{
    int day=10,n=1,nn;
    while (day!=1)
    {
        nn=2*n+2;
        n=nn;
        day--;
        cout<<"第"<<day<<"天还剩"<<nn<<"个桃子"<<endl;
    }
    return 0;
}
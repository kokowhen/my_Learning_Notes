#include<iostream>
using namespace std;
//猴子吃桃的问题，倒推的思想

int main()
{
    int i,n10=1,n9;
    for ( i = 1; i < 10; i++)
    {
        n9=2*n10+2;
        n10=n9;
        cout<<"第"<<10-i<<"天还剩"<<n9<<"个桃子。"<<endl;
    }
    return 0;
}
#include<iostream>
using namespace std;
//测试1000到10000的数中是否有aabb平方数
int main()
{
    int i=33,j;
    while (i<99)
    {
        j=i*i;
        i++;
        cout<<"j="<<j<<endl;
    }
    return 0;
}
//输入一些整数存储到一个二维数组中再输出

#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int a[3][4];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin>>a[i][j];
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout<<setw(5)<<a[i][j];
        }
        cout<<endl;
    }
    return 0;
}
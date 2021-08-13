//指针和二维数组

#include<iostream>
#include<cstdlib>
#include<iomanip>
using namespace std;
int main()
{
    const int M = 5,N = 5;
    int a[M][N];
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            a[i][j] = rand()%10;
        }
        
    }
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout<<setw(5)<<a[i][j]<<"\t";
        }
        cout<<endl;
    }
    int *var;
    var = a[0];
    for (int i = 0; i < M*N; i++)
    {
        cout<<"value: "<<*var<<"\t";
        cout<<"address: "<<var<<endl;
        var++;
    }
    return 0;
}
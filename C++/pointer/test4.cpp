//指针和数组

#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    const int M =5;
    int a[M];
    for (int i = 0; i < M; i++)
    {
        a[i]=rand()%100;
    }
    for (int i = 0; i < M; i++)
    {
        cout<<"a["<<i<<"]="<<a[i]<<"\t";
    }
    cout<<"\n";
    int *var;
    var = a;
    for (int i = 0; i < M; i++)
    {
        cout<<"Address of a["<<i<<"] is: "<<var;
        cout<<"Value of a["<<i<<"] is: "<<*var<<endl;
        var++;
    }
    return 0;
}
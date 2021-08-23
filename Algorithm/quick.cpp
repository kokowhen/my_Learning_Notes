//快速排序

#include<iostream>
#include<ctime>
using namespace std;
const int N = 20;
int a[N];

//生成随机数组并打印数组的函数
void randNumber(int a[],int N)
{
    for (int i = 1; i <= N; i++)
    {
        a[i] = rand()%100;
        cout<<a[i]<<"\t";
    }
    cout<<endl;
}

//快速排序函数
void quickSort(int left,int right)
{
    int i,j,t,temp;

    if (left>right)
    {
        return;
    }
    

    temp = a[left];
    i = left;
    j = right;

    while (i!=j)
    {
        while(a[j]>=temp && i<j)
        {
            j--;
        }
        while(a[i]<=temp && i<j)
        {
            i++;
        }

        if (i<j)
        {
            t = a[i];
            a[i] = a[j];
            a[j] = t;
        }
        
    }
    a[left] = a[i];
    a[i] = temp;

    quickSort(left,i-1);
    quickSort(i+1,right);
}

//打印排序结果的函数

void printResult(int a[],int N)
{
    for (int i = 1; i <= N; i++)
    {
        cout<<a[i]<<"\t";
    }
    cout<<endl;
}

//主函数
int main()
{
    //调用子函数
    randNumber(a,N);
    quickSort(1,N);
    printResult(a,N);

    system("pause");
    return 0;
}
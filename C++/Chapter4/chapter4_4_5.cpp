#include<iostream>
using namespace std;
//输出0~100内3的倍数，while循环实现，如果用while循环，那么改变循环条件的语句就要在continue语句前面，不然循环的判断条件不会改变
int main()
{
    int i=-1;
    while (i<=100)
    {
        i++;
        if (i%3!=0) continue;//continue直接转到下一次循环开头了，不执行循环体内continue后面的程序
        cout<<i<<endl;
    }
    return 0;
}
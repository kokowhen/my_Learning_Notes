#include<iostream>
using namespace std;
//测试i++和++i的区别

int main()
{
    int i=1;
    printf("%d,%d\n",++i,++i);
    printf("%d,%d\n",i++,i++);
    return 0;
}
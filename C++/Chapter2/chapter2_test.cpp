//输入一个字母，输出以该字符为起始字符的连续的三个ASCII值
#include<iostream>
using namespace std;

int main()
{
    char a;
    cout<<"Please input the letter:";
    cin>>a;
    cout<<"Their ASCII's value are:"<<int(a)<<'\t'<<int(a+1)<<'\t'<<int(a+2);
    return 0;
}
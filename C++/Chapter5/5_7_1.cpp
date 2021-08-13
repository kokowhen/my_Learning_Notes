//字符数组与字符串

#include<iostream>
using namespace std;
int main()
{
    char c = 'M';
    // char a = "M";//字符变量a只能存放一个字符，而"M"占两个字符
    char a[] = "M";
    char b[] = "爱";
    // char str[] = {'C','+','+',"难"};
    cout<<c<<endl;
    cout<<b<<endl;
    // cout<<str<<endl;
    // cout<<str[3]<<str[4]<<endl;
    cout<<b[0]<<b[1]<<endl;//连续两个字符才能输出一个中文，因为中文占两个字符
    cout<<b[0]<<endl;//一个字符不能输出中文
    cout<<b[1]<<endl;
    cout<<b[2]<<endl;
    return 0;
}
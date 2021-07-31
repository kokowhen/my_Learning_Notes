#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    //十进制
    cout<<"十进制"<<endl;
    cout<<123456<<endl;
    cout<<1234567<<endl;
    cout<<123456.0<<endl;
    cout<<12345.0<<endl;
    cout<<1234.56<<endl;
    cout<<12345.678<<endl;
    //八进制和十六进制
    cout<<"八进制和十六进制"<<endl;
    cout<<0123<<endl;
    cout<<0x123<<endl;
    //指数表示
    cout<<"指数表示"<<endl;
    cout<<.25e3<<endl;
    cout<<9.37e-2<<endl;
    //字符型和字符串型
    cout<<"字符型和字符串型"<<endl;
    cout<<"a"<<endl;
    cout<<'\061'<<endl;
    cout<<'\x67'<<endl;
    cout<<'a'<<endl;
    
    return 0;
}
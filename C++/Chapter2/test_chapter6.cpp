#include<iostream>
#include<iomanip>
using namespace std;

int main(void)
{
    const int A = 100;
    int a=10;
    double b=12.3;
    char c='a';
    // cout<<"Please input int double char:";
    // cin>>a>>b>>c;//按照变量的数据类型输入这种输入有个问题就是键盘输入到缓冲区的数据类型和cin的数据类型不对应时输出就会有偏差
    // cin>>a;
    // cin.clear();
    // cin.sync();//这种情况只能用“Enter”键输入
    // cin>>b;
    // cin.clear();
    // cin.sync();
    // cin>>c;
    cout<<"a++ is:"<<setw(2)<<a<<"\t"<<a++<<endl;//为什么这里a++没有执行自增运算，输出还是10？
    cout<<"b is:"<<b<<endl;
    cout<<"c is:"<<c<<endl;
    cout<<"A is:"<<A<<'\n';
    return 0;
}
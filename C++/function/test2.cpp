//通过函数实现两个数的交换，这个函数不用返回值

#include<iostream>
using namespace std;
void exchange(int num1,int num2)
{
    int temp;
    cout<<"交换前："<<endl;
    cout<<"num1="<<num1<<"\t"<<"num2="<<num2<<endl;
    temp = num1;
    num1 = num2;
    num2 = temp;
    cout<<"交换后："<<endl;
    cout<<"num1="<<num1<<"\t"<<"num2="<<num2<<endl;
}
int main()
{
    exchange(10,30);
}
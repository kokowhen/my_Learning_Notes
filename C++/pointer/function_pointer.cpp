//指针和函数
//地址传递

#include<iostream>
using namespace std;

//声明函数
void Swap_Value(int a,int b);       //不管我main函数是写在前还是写在后，程序运行到主函数里调用其他函数的时候
void Swap_Address(int *a,int *b);   //都会转到其他函数体内，就会传递地址

//定义一个函数，这个函数进行值传递

int main()
{
    int num1 = 10;
    int num2 = 300;

    Swap_Value(num1,num2);    //传入的是值

    Swap_Address(&num1,&num2);    //传入的是地址


    cout<<"main()函数中值传递的情况："<<endl;
    cout<<"a="<<num1<<endl;
    cout<<"b="<<num2<<endl;

    cout<<"main函数中地址传递的情况："<<endl;
    cout<<"a="<<num1<<endl;
    cout<<"b="<<num2<<endl;

    return 0;
}

void Swap_Value(int a,int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout<<"Swap_Value()函数中："<<endl;
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
}

//定义一个函数，这个函数进行地址传递

void Swap_Address(int *a,int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    cout<<"Swap_Address()函数中："<<endl;
    cout<<"a="<<*a<<endl;
    cout<<"b="<<*b<<endl;
}

//主函数

// int main()
// {
//     int num1 = 10;
//     int num2 = 300;

//     Swap_Value(num1,num2);    //传入的是值

//     Swap_Address(&num1,&num2);    //传入的是地址


//     cout<<"main()函数中值传递的情况："<<endl;
//     cout<<"a="<<num1<<endl;
//     cout<<"b="<<num2<<endl;

//     cout<<"main函数中地址传递的情况："<<endl;
//     cout<<"a="<<num1<<endl;
//     cout<<"b="<<num2<<endl;

//     return 0;
// }
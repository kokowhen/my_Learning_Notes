//const修饰指针
//const修饰指针(指针常量)
//const修饰指针变量(常量指针)
//const既修饰指针又修饰指针变量

#include<iostream>
using namespace std;

int s1(int num1,int num2)
{
    const int *p1 = &num1;
    p1 = &num2; //指针的指向可以修改
    // *p1 = num2;  //指针指向的值不能修改
    cout<<"const修饰指针的情况："<<endl;
    return *p1;
}

int s2(int num1,int num2 )
{
    int *const p2 = &num1;
    *p2 = num2;
    // p2 = &num2;  //指针的指向不能修改
    cout<<"const修饰指针变量的情况："<<endl;
    return p2,*p2;
}

int s3(int num1,int num2)
{
    const int *const p3 = &num1;
    // p3 = &num2;
    // *p3 = num2;
    cout<<"const既修饰指针又修饰变量的情况："<<endl;
}

int main()
{
    int a = 10;
    int b = 200;
    int r1 = s1(a,b);
    int r2 = s2(a,b);
    int r3 = s3(a,b);
    cout<<r1<<endl;
    cout<<r2<<endl;
    cout<<r3<<endl;
    return 0;
}
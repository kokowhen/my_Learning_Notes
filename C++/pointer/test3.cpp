//指针的运算

#include<iostream>
using namespace std;
int main()
{
    const int N = 3;
    int a[N] = {10,100,1400};
    int b = 10;
    int *var1;//声明指针变量
    int *var2;
    var1 = a;//等同于var1 = &a[1]，指针中第一个元素的地址
    // var1 = &a;//指针数组初始化不能在数组名前加取址符&
    // var2 = b;//指针变量初始化要加取址符&，不然会报错
    var2 = &b;
    cout<<"Address of b is: "<<var2<<endl;
    cout<<"Value of b is: "<<*var2<<endl;
    //递增一个指针
    cout<<"the situation of var1++:"<<endl;
    for (int i = 0; i < N; i++)
    {
        cout<<"Address of a["<<i<<"] is: "<<var1<<"\t";
        cout<<"Value of a["<<i<<"] is: "<<*var1<<endl;
        var1++;
    }
    //递减一个指针
    int *var3;
    var3 = &a[N-1];//指针中最后一个元素的地址
    cout<<"the situation of var1--:"<<endl;
    for (int i = N-1; i >= 0; i--)
    {
        cout<<"Address of a["<<i<<"] is: "<<var3<<"\t";
        cout<<"Value of a["<<i<<"] is: "<<*var3<<endl;
        var3--;
    }
    //指针的比较
    cout<<"the situation of comparision:"<<endl;
    int *var4;
    int i=0;
    var4 = a;
    while (var4 <= &a[N-1])
    {
        cout<<"Address of a["<<i<<"] is: "<<var4<<"\t";
        cout<<"Value of a["<<i<<"] is: "<<*var4<<endl;
        var4++;
        i++;
    }
    
    return 0;
}
//结构体做函数参数列表
//如何将结构体作为函数的参数并输出

#include<iostream>
#include<string>
using namespace std;

//定义一个学生结构体
struct Student
{
    string name;
    int age;
    int scores;
};

//值传递结构体变量到函数

void print_Stu1(struct Student stu1)
{
    stu1.age = 100;
    cout<<"值传递结构体变量到在子函数中打印："<<endl;
    cout<<stu1.name<<"\t"<<stu1.age<<"\t"<<stu1.scores<<"\t"<<endl;
}

//地址传递结构体变量到函数

void print_Stu2(struct Student *p)
{
    p->age = 1000;
    cout<<"地址传递结构体变量到子函数中打印："<<endl;
    cout<<p->name<<"\t"<<p->age<<"\t"<<p->scores<<endl;
}

//创建结构体变量
int main()
{
    struct Student stu1;
    stu1.name = "张三";
    stu1.age = 23;
    stu1.scores = 90;

    //调用子函数
    // print_Stu1(stu1);   //值传递
    print_Stu2(&stu1);  //地址传递

    cout<<"在main函数中打印："<<endl;
    cout<<stu1.name<<"\t"<<stu1.age<<"\t"<<stu1.scores<<"\t"<<endl;

    system("pause");
    return 0;
}
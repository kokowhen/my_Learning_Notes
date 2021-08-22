//const在结构体中的使用

#include<iostream>
#include<string>
using namespace std;

//定义结构体
struct student
{
    string name;
    int age;
    int scores;
}stu3;

//用于打印学生信息的子函数

void print_s1(const student *p)
{
    // p->age = 100;   //只能读，不能改
    cout<<p->name<<"\t"<<p->age<<"\t"<<p->scores<<endl;
}

void print_s2(struct student s2)
{
    cout<<s2.name<<"\t"<<s2.age<<"\t"<<s2.scores<<endl;
}
//创建结构体变量

int main()
{
    struct student stu1 = {"李四",23,88};

    struct student stu2;
    stu2.name = "神2";
    stu2.age = 22;
    stu2.scores = 98;

    stu3.name = "老三";
    stu3.age = 24;
    stu3.scores = 99;

    //调用函数
    print_s1(&stu1);  //地址传递
    print_s2(stu2);   //值传递
    

    system("pause");
    return 0;
}
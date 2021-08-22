//结构体指针

#include<iostream>
#include<string>
using namespace std;

struct Student
{
    string name;
    int age;
    int scores;
};

int main()
{
    struct Student s1 = {"李四",22,90};

    Student *p = &s1;

    cout<<p->name<<"\t"<<p->age<<"\t"<<p->scores<<endl; //结构体可以通过箭头符号去访问指针元素
}
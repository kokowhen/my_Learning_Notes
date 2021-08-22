//结构体嵌套

#include<iostream>
#include<string>
using namespace std;

struct Student
{
    string name;
    int age;
    int scores;
};

struct Teacher
{
    int id;
    string name;
    int age;
    struct Student stu;
};

int main()
{
    Teacher t;
    t.id = 10000;
    t.name = "Mr.shi";
    t.age = 40;
    t.stu.name = "晓华";
    t.stu.age = 22;
    t.stu.scores = 90;
    cout<<t.id<<"\t"<<t.name<<"\t"<<t.age<<"\t"<<t.stu.name<<"\t"<<t.stu.age<<"\t"<<t.stu.scores<<endl;
    return 0;
}
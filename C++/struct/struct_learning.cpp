//初识结构体
//创建一个学生的数据类型

#include<iostream>
#include<string>
using namespace std;

struct Student  //  定义结构体变量的时候，关键字struct不可以省略
{
    string name;
    int age;
    double scores;
}s3;

int main()
{
    struct Student s1;  //  创建结构体变量的时候，关键字可以省略
    s1.name = "张三";
    s1.age = 23;
    s1.scores = 90;
    cout<<"姓名："<<s1.name<<endl;
    cout<<"年龄："<<s1.age<<endl;
    cout<<"分数："<<s1.scores<<endl;

    struct Student s2 = {"李四",23,98};
    cout<<"姓名："<<s2.name<<endl;
    cout<<"年龄："<<s2.age<<endl;
    cout<<"分数："<<s2.scores<<endl;

    s3.name = "王五";
    s3.age = 23;
    s3.scores = 60;
    cout<<"姓名："<<s3.name<<endl;
    cout<<"年龄："<<s3.age<<endl;
    cout<<"分数："<<s3.scores<<endl;

    return 0;
}
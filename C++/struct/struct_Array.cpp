//结构体数组的学习

#include<iostream>
#include<string>
using namespace std;

//定义一个结构体

struct Student
{
    string name;
    int age;
    int scores;
};

//创建结构体数组

int main()
{
    struct Student stuArray[3] = 
    {
        {"张三",23,89},
        {"李四",22,88},
        {"王五",24,90},
    };

    stuArray[2] = {"赵六",22,80};

    for (int i = 0; i < 3; i++)
    {
        cout<<stuArray[i].name<<"\t"<<stuArray[i].age<<"\t"<<stuArray[i].scores<<endl;
    }
    
}
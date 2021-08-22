//设计一个英雄结构体，包括成员姓名，年龄，性别；创建结构体数组，数组中存放5名英雄。
//通过冒泡排序，将数组中的英雄按照年龄进行升序排序，最终打印排序好的结果

#include<iostream>
#include<string>
using namespace std;

//定义一个英雄结构体

struct Hero
{
    string name;
    int age;
    string sex;
};


//根据冒泡排序创建函数

void bubble(struct Hero h[],int N)
{
    struct Hero temp;
    for (int i = 0; i < N-1; i++)
    {
        for (int j = 0; j < N-i-1; j++)
        {
            if (h[j].age>h[j+1].age)
            {
                temp = h[j];
                h[j] = h[j+1];
                h[j+1] = temp;
            }
            
        }
        
    }
    
}

//打印函数

void print_infor(struct Hero h[],int N)
{
    for (int i = 0; i < N; i++)
    {
        cout<<h[i].name<<"\t"<<h[i].age<<"\t"<<h[i].sex<<"\t"<<endl;
    }
    
}

//主函数

int main()
{
    const int N = 5;
    //创建结构体变量
    struct Hero h[N];
    h[0] = {"刘备",23,"男"};
    h[1] = {"关羽",22,"男"};
    h[2] = {"张飞",20,"男"};
    h[3] = {"赵云",21,"男"};
    h[4] = {"貂蝉",19,"女"};
    //调用函数
    bubble(h,N);
    print_infor(h,N);

    system("pause");
    return 0;
}
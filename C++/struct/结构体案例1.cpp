#include<iostream>
#include<string>
#include<ctime>
using namespace std;

//定义学生的结构体

struct Student
{
    string Sname;    //学生的姓名
    int scores;     //学生的分数
};

//定义老师的结构体

struct Teacher
{
    string Tname;                   //老师的姓名
    struct Student stu_Array[5];    //存放学生信息的数组
};

//子函数1：给老师信息赋值的函数

void teacher_infor(struct Teacher tea_Array[],int N,int M)
{
    for (int i = 0; i < N; i++)
    {
        string nameSeed = "ABCDE";
        tea_Array[i].Tname = "Teacher_";
        tea_Array[i].Tname += nameSeed[i];

        for (int j = 0; j < M; j++)
        {
             tea_Array[i].stu_Array[j].Sname = "Student_";
             tea_Array[i].stu_Array[j].Sname += nameSeed[j];
             int random = rand()%60 + 40;
             tea_Array[i].stu_Array[j].scores = random;
        }
        
    }
    
}

//子函数2:打印函数

void print_infor(struct Teacher tea_array[],int N,int M)
{
    for (int i = 0; i < N; i++)
    {
        cout<<"老师姓名："<<tea_array[i].Tname<<endl;

        for (int j = 0; j < M; j++)
        {
            cout<<"\t学生姓名："<<tea_array[i].stu_Array[j].Sname;
            cout<<"学生成绩："<<tea_array[i].stu_Array[j].scores<<endl;
        }
    }
    
}

//主函数

int main()
{
    //随机数种子
    srand((unsigned int)time(NULL));
    const int N = 3,M=5;
    //创建老师结构体变量
    struct Teacher tea_Array[N];
    //调用子函数
    teacher_infor(tea_Array,N,M);
    print_infor(tea_Array,N,M);
    system("pause");
    return 0;
}
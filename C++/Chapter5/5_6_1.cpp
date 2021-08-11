//输入4位同学的语文、数学、英语的成绩，并计算每位同学的总成绩排序输出

#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    const int N=4,M=3;
    double a[N][M+1];//把总成绩也放进来了
    double b[N];//为了存放总成绩并对其排序的
    int temp;//存放冒泡排序的临时变量
    cout<<"请输入学生的成绩："<<endl;
    //存储输入的学生成绩
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"学生的成绩为："<<endl;
    //输出学生的成绩
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cout<<setw(5)<<a[i][j]<<"\t";
        }
        cout<<endl;
    }
    //计算总成绩并将其存放到数组中
    for (int i = 0; i < N; i++)
    {
        a[i][M]=a[i][0];//总成绩值初始化，每一行的第一个值
        for (int j = 1; j < M; j++)//从第二列开始加起，因为初值已经赋为每一行的第一个值了
        {
            a[i][M]+=a[i][j];//每一行分别对每列值相加
            // cout<<a[i][M]<<endl;
        } 
    }
    //计算总成绩后的输出
    cout<<"未排序的结果为：\n";
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M+1; j++)
        {
            cout<<setw(5)<<a[i][j]<<"\t";
        }
        cout<<endl;
    }
    //将总成绩存放到数组b[N]中
    cout<<"总成绩为："<<endl;
    for (int i = 0; i < N; i++)
    {
        b[i]=a[i][M];
        cout<<b[i]<<"\t";
    }
    cout<<endl;
    //使用冒泡排序算法对成绩进行排序
    for (int i = 1; i < N; i++)//轮数
    {
        for (int j = 0; j < N-i; j++)//每一轮的次数
        {
            if(b[j]>b[j+1])
            {
                temp=b[j+1];
                b[j+1]=b[j];
                b[j]=temp;
            }
        }
    }
    //对排序好的成绩进行输出
    cout<<"冒泡排序的结果为：\n";
    for (int i = 0; i < N; i++)
    {
        cout<<b[i]<<"\t";
    }
    //从大到小对总成绩进行排序
    for (int i = 1; i < N; i++)
    {
        for (int j = 0; j < N-i; j++)
        {
            if(b[j]<b[j+1])
            temp=b[j+1];
            b[j+1]=b[j];
            b[j]=temp;
        }    
    }
    //输出排序好的总成绩
    cout<<"\n总成绩从大到小排序为：\n";
    for (int i = 0; i < N; i++)
    {
        cout<<b[i]<<"\t";
    }
    //按照总成绩对学生学号进行排名
    cout<<"\n学生成绩排名："<<endl;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if(b[i]==a[j][M])
            {
                cout<<"第"<<i+1<<"名的学号为:\t"<<j<<endl;
            }
        }
        
    }
    
}
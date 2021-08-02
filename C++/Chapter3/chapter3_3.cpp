#include<iostream>
using namespace std;
//根据考试成绩，打印出对应的百分制分数段
int main()
{
    double score;
    while (1)
    {
        cout<<"Please input the student's score:";
        cin>>score;
        switch (int(score/10))//expression里面的数据类型可以是int整型、char字符型、bool布尔型
        {
            case 10 :
            case 9 :cout<<"The grade is A."<<endl;break;//case 10和case 9共同执行一个语句
            case 8 :cout<<"The grade is B."<<endl;break;//思考break的作用？跳出switch语句的意思是指？如果没有break会输出什么
            case 7 :cout<<"The grade is C."<<endl;break;
            case 6 :cout<<"The grade is D."<<endl;break;
            case 5 :
            default:cout<<"The grade is E."<<endl;break;//default语句的作用是什么？没有default语句会怎么样？
        }
    }
    return 0;
}
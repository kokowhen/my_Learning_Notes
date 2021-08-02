#include<iostream>
using namespace std;
//输入成绩判定合格还是不合格
int main()
{
    double s;
    cout<<"Please input student's score:";
    cin>>s;
    if (0<s&&s<=100)//不能这样输入：0<s<100
    {
        if (0<s&&s<60) cout<<"Failed."<<endl;//能写在一行就不要用{}，不过相比之前的有{}的这样看上去太紧凑了
        else cout<<"Pass."<<endl;
    }
    else cout<<"Please input the correct score."<<endl;
    return 0;
}
#include<iostream>
using namespace std;
//输入年份判断其是闰年还是平年

int main()
{
    int year;
    while (1)
    {
        cout<<"Please input the year:";
        cin>>year;
        if ((year%400==0)||((year%4==0)&&(year%100!=0)))
        {
            cout<<year<<' '<<"is leap year."<<endl;
        }
        else cout<<year<<' '<<"is average year."<<endl;
    
    }
    
    
    return 0;
}
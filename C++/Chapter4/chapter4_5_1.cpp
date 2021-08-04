#include<iostream>
using namespace std;
//输入10个圆的半径，输出各自的面积
int main()
{
    const double PI=3.1415;
    double r,s;
    int i,j;
    for ( i = 1; i <= 10; i++)
    {
        cout<<"Please input radius:"<<endl;
        cin>>r;
        if (r<=0)
        {
            for ( j = 1; j <= 2; j++)
            {
                cout<<"Please input the radius again:"<<endl;
                cin>>r;
                if (r>0) break;
                if (j==2) cout<<"error radius."<<endl;
            }
        s=PI*r*r;  
        }
        else cout<<"s"<<i<<"="<<s<<endl;
    }
    return 0;
}
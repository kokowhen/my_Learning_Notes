#include<iostream>
using namespace std;
//计算商场打折扣时顾客应该付的钱，思路和前面的分段函数一样

int main()
{
    double price,pay;
    while (1)
    {
        cout<<"The whole price is:";
        cin>>price;
        if (price>=400)
        {
            pay=0.9*price;
            cout<<"You will pay for "<<pay<<endl;
        }
        else if (price>245)
        {
            pay=0.95*price;
            cout<<"You will pay for "<<pay<<endl;
        }
        else
        {
            pay=0.97*price;
            cout<<"You will pay for "<<pay<<endl;
        }
    }
    return 0;
    
    
}
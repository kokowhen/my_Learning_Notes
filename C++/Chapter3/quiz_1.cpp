#include<iostream>
using namespace std;
//根据快递重量计算运费

int main()
{
    double w,p;
    while (1)
    {
       cout<<"The weight is:";
       cin>>w;
       if (w<=5) p=10;
       else if (w<7) p=15;
       else p=10+(w-5)/2*5;
       cout<<"The price is:"<<p<<endl;
           
    }
    return 0;
}
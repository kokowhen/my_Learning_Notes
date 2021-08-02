#include<iostream>
using namespace std;
//根据里程计算运费

int main()
{
    const int p=1000;//p为每公里每吨的基本运费
    double s,w,f1,f2,f3,f4,f5,f;//s是里程数，w是货物的重量，f是应该付的钱
    while (1)
    {
        cout<<"Please inpute your milage:";
        cin>>s;
        cout<<"Please inpute the weight of the cargo:";
        cin>>w;
        f1=s*w*p;
        f2=f1+(s-500)*w*p*0.95;
        f3=f2+(s-1000)*w*p*0.92;
        f4=f3+(s-2000)*w*p*0.90;
        f5=f4+(s-3000)*w*p*0.85;
        if (s<500) f=f1;
        else if (s<1000) f=f2;
        else if (s<2000) f=f3;
        else if (s<3000) f=f4;
        else f=f5;
        cout<<"Your freight is:"<<int(f)<<endl;
        
    }
   return 0; 
}
//求一个正整数的数根

#include<iostream>
using namespace std;
int main()
{
    int n,n1,n2,sum=0;
    int sum1,sum2,sum3=0;
    int i;
    cout<<"Please input a number:";
    cin>>n;
    if(n<10)cout<<"It's root of number is 0."<<endl;
    else
    {
        do
        {
            n1=n%10;
            n2=n/10;
            n=n2;
            sum=sum+n1;
        }while (n2!=0);
        if(sum>=10)
        {
            while (sum2!=0)
            {
                sum1=sum%10;
                sum2=sum/10;
                sum=sum2;
                sum3=sum1+sum3;
            }
                
        }
        cout<<"It's root number is "<<sum3<<"."<<endl;
    }
    return 0;
}
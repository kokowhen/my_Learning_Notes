#include<iostream>
using namespace std;
//从百鸡问题学习穷举法c1值5；c2值3；3只c3值1；100块买c1，c2，c3各几只，总的买了100只
//初步分析发现，解不止有一组，所以要把所有满足的解都列出来，这就是穷举法

int main()
{
    int i,j,k;
    cout<<"百鸡问题的解为："<<endl;
    for(i=0;i<=20;i++)
        for(j=0;j<=33;j++)
            for(k=0;k<=300;k++)
            if(i+j+k==100&&5*i+3*j+k/3==100)
    cout<<i<<"\t"<<j<<"\t"<<k<<endl;
    return 0;
}
//这种算法要执行循环21*34*301=214914次，效率不高
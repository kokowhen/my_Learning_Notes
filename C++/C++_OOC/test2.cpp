//成员函数

#include<iostream>
using namespace std;

class Box
{
    public:
        double length;
        double breadth;
        double height;
        //成员函数声明
        double getVolume(void);
        void setLength(double len);
        void setBreadth(double bre);
        void setHeight(double hei);
};

//成员函数定义

double Box::getVolume(void)
{
    return length * breadth * height;
}

void Box::setLength(double len)
{
    length = len;
}

void Box::setBreadth(double bre)
{
    breadth = bre;
}

void Box::setHeight(double hei)
{
    height = hei;
}

//程序的主函数

int main()
{
    Box Box1;
    Box Box2;
    double volume = 0;

    // Box1详述
    Box1.length = 6.52;
    Box1.breadth = 7.33;
    Box1.height = 3.22;

    //Box2详述
    Box2.length = 5.99;
    Box2.breadth = 6.21;
    Box2.height = 2.89;

    //box1的体积
    volume = Box1.getVolume();
    cout<<"Box1's volume is "<<volume<<endl;

    //box2的体积
    volume = Box2.getVolume();
    cout<<"Box2's volume is "<<volume<<endl;

    return 0;
}
//初识C++面向对象

#include<iostream>
using namespace std;

class Box   //定义类
{
    public:     //类成员的访问属性为public
        double length;
        double breadth;
        double height;

        //成员函数声明
        double get(void);
        void set(double len,double bre,double hei);
};

//成员函数定义

double Box::get(void)   //get函数无参数，不接受任何参数，所以需要声明其类型为void
{
    return length * breadth * height;   
}

void Box::set(double len,double bre,double hei)
{
    length = len;
    breadth = bre;
    height = hei;
}

int main()
{
    Box Box1;   //定义对象
    Box Box2;
    Box Box3;
    double volume;

    Box1.length = 2.5;//如果是private或protected就不能使用直接成员运算符(.)进行访问
    Box1.breadth = 3.4;
    Box1.height = 3.0;

    Box2.length = 4.1;
    Box2.breadth = 3.55;
    Box2.height = 2.01;

    volume = Box1.length * Box1.breadth * Box1.height;
    cout<<"Box1's volume = "<<volume<<endl;

    volume = Box2.length * Box2.breadth * Box2.height;
    cout<<"Box2's volume = "<<volume<<endl;

    Box3.set(20.1,55,5.32);
    volume = Box3.get();
    cout<<"Box3's volume = "<<volume<<endl;

    return 0;
}
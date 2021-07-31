# 第一部分 计算机程序语言

## 人与计算机的交流语言

计算机能理解的语言：机器语言，0和1组成的语言

机器语言不好理解，为了方便和计算机打交道，设计了一些计算机语言

机器语言-汇编语言-高级语言

高级语言方便人们能够方便的理解，以人的思维方式编写

高级语言又分为面向过程和面向对象的语言；分别以过程为中心和以类和对象为中心

编译：把高级语言翻译为计算机能理解的机器语言的过程

## C++语言的发展

贝尔实验室

标准的发布和更新

# 第二部分 C++程序的组成和要素

把程序想象成写文章一样，有自己的框架和格式

输出一段话“XXXX”的例子

```c++
#inckude<iostream>//包含输入输出流库，告诉计算机要干嘛
using namespace std;//名称空间标识符，在std里面
int main(void)
{
​	cout<<"XXXX\n";//可以把cout想象为一个屏幕，<<代表方向
​	return 0;
}
```

语句由分结束，每个程序都有一个主函数，执行入口

字：ASCII码

词：关键字（需要理解使用，全部都是小写字母）、标识符（程序员自己定义的）、常量

词组：表达式

句子：语句

段落：函数

文章：程序

# 第三部分 变量和数据类型

- Ex1.

```c++
#include<iostream>
using namespace std;
int main(void)
{
 	int x,y；
    x=3;y=5;
    sum=x+y;
    cout<<sum;
    return 0;//return语句结束的分号一定不要忘记
}
```

## 数据类型表达的含义，对变量的作用

### 内存如何编址

计算机代码和数据都是以二进制形式存储在计算机内存；然后用一个无符号的十六进制整数来标识地址

```c++
//理解 
int x;
x=0;
//在计算机内存里找一个空间，这个空间的名称为x，x就会对应一个编码，不同的数据类型占用的存储空间不同
```

- Ex2-各种数据类型占用的字节数和取值范围

```c++
#include <iostream>
#include <limits>

using namespace std;

int main(){
    cout << "type: \t\t" << "*************size*************"<<endl;
    cout << "bool: \t\t" << "所占字节数："<< sizeof(bool);
    cout << "\t最大值: " << (numeric_limits<bool>::max)();
    cout << "\t\t最小值："<< (numeric_limits<bool>::min)() << endl;
    cout << "char：\t\t" << "所占字节数：" << sizeof(char);
    cout << "\t最大值：" << (numeric_limits<char>::max)();
    cout << "\t\t最小值："<< (numeric_limits<char>::min)() << endl;
    cout << "signed char：\t" << "所占字节数：" << sizeof(signed char);
    cout << "\t最大值：" << (numeric_limits<signed char>::max)();
    cout << "\t\t最小值：" << (numeric_limits<signed char>::min)() << endl;
    cout << "unsigned char：\t" << "所占字节数：" << sizeof(unsigned char);
    cout << "\t最大值：" << (numeric_limits<unsigned char>::max)();
    cout << "\t\t最小值：" << (numeric_limits<unsigned char>::min)() << endl;
    cout << "wchar_t：\t" << "所占字节数：" << sizeof(wchar_t);
    cout << "\t最大值：" << (numeric_limits<wchar_t>::max)();
    cout << "\t\t最小值：" << (numeric_limits<wchar_t>::min)() << endl;
    cout << "short：\t\t" << "所占字节数：" << sizeof(short);
    cout << "\t最大值：" << (numeric_limits<short>::max)();
    cout << "\t\t最小值：" << (numeric_limits<short>::min)() << endl;
    cout << "int：\t\t" << "所占字节数：" << sizeof(int);
    cout << "\t最大值：" << (numeric_limits<int>::max)();
    cout << "\t\t最小值：" << (numeric_limits<int>::min)() << endl;
    cout << "unsigned：\t\t" << "所占字节数：" << sizeof(unsigned);
    cout << "\t最大值：" << (numeric_limits<unsigned>::max)();
    cout << "\t\t最小值：" << (numeric_limits<unsigned>::min)() << endl;
    cout << "long：\t\t" << "所占字节数：" << sizeof(long);
    cout << "\t最大值：" << (numeric_limits<long>::max)();
    cout << "\t\t最小值：" << (numeric_limits<long>::min)() << endl;
    cout << "unsigned long：\t\t" << "所占字节数：" << sizeof(unsigned long);
    cout << "\t最大值：" << (numeric_limits<unsigned long>::max)();
    cout << "\t\t最小值：" << (numeric_limits<unsigned long>::min)() << endl;
    cout << "double：\t\t" << "所占字节数：" << sizeof(double);
    cout << "\t最大值：" << (numeric_limits<double>::max)();
    cout << "\t\t最小值：" << (numeric_limits<double>::min)() << endl;
    cout << "long double：\t\t" << "所占字节数：" << sizeof(long double);
    cout << "\t最大值：" << (numeric_limits<long double>::max)();
    cout << "\t\t最小值：" << (numeric_limits<long double>::min)() << endl;
    cout << "float：\t\t" << "所占字节数：" << sizeof(float);
    cout << "\t最大值：" << (numeric_limits<float>::max)();
    cout << "\t\t最小值：" << (numeric_limits<float>::min)() << endl;
    cout << "size_t：\t\t" << "所占字节数：" << sizeof(size_t);
    cout << "\t最大值：" << (numeric_limits<size_t>::max)();
    cout << "\t\t最小值：" << (numeric_limits<size_t>::min)() << endl;
    cout << "string：\t\t" << "所占字节数：" << sizeof(string) << endl;
    cout << "type: \t\t" << "*************size*************"<<endl;
    return 0;
}
```

### 总结

- **变量必须先定义后使用**

- **变量的基本属性：**
  变量名、变量的值、变量的类型、变量的地址

- **不同数据类型的变量：**

  占用内存空间的大小不同

  数据在内存中的存储形式不同

  合法数据取值范围不同

  可参与的运算种类不同

# 第四部分 程序结构基本框架

Ex.3 求圆的面积

```c++
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double r,s;
    //r = 10;
    cout<<"Please input the radius:";
    cin>>r;//看作是键盘
    s = 3.1415*r*r;
    cout<<"s="<<fixed<<setprecision(2)<<s<<"\n";
    return 0;
}
```

在分析问题的基础上构建数学模型，设计合适的算法

# 第五部分 文字常量与符号常量

**C++有哪些常量表示**

**为什么需要符号常量来表示**

test

```c++
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    cout<<123456<<endl;
    cout<<1234567<<endl;
    cout<<123456.0<<endl;
    cout<<12345.0<<endl;
    cout<<1234.56<<endl;
    cout<<12345.678<<endl;
    cout<<"a"<<endl;
    cout<<'\0123'<<endl;
    cout<<'\0x123'<<endl;
    cout<<'a'<<end;
    
    return 0;
}
```

<center>常量知识点思维导图助记😁👀</center>

<img src="C:\Users\sjy\Desktop\CodeLife\C++\Mindmaps\常量Constant.png" style="zoom:200%;" />




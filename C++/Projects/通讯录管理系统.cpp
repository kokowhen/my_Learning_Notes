

#include<iostream>
#include<string>
using namespace std;

//菜单界面显示函数

void showMenu()
{
    cout<<"*****************************"<<endl;
    cout<<"*****"<<"\t"<<"1、添加联系人"<<"\t"<<"*****"<<endl;
    cout<<"*****"<<"\t"<<"2、显示联系人"<<"\t"<<"*****"<<endl;
    cout<<"*****"<<"\t"<<"3、删除联系人"<<"\t"<<"*****"<<endl;
    cout<<"*****"<<"\t"<<"4、查找联系人"<<"\t"<<"*****"<<endl;
    cout<<"*****"<<"\t"<<"5、修改联系人"<<"\t"<<"*****"<<endl;
    cout<<"*****"<<"\t"<<"6、清空联系人"<<"\t"<<"*****"<<endl;
    cout<<"*****"<<"\t"<<"0、退出通讯录"<<"\t"<<"*****"<<endl;
    cout<<"*****************************"<<endl;
}

//设计联系人结构体

struct contacters
{
    string name;
    string sex;
    int age;
    int number;
    string location;
};

//设计通讯录结构体

struct contacts
{
    
};



int main()
{
    int select = 0; //  创建用户输入的变量
    showMenu(); //调用菜单显示函数
    cin>>select;
    while (true)
    {
        switch (select)
        {
        case 1:     //1、添加联系人
            break;
        case 2:     //2、显示联系人
            break;
        case 3:     //3、删除联系人
            break;
        case 4:     //4、查找联系人
            break;
        case 5:     //5、修改联系人
            break;
        case 6:     //6、清空联系人
            break;
        case 0:     //0、退出通讯录
            cout<<"欢迎下次使用。"<<endl;
            system("pause");
            return 0;
            break;
        default:
            break;
        }
    }
    
    
    

    system("pause");
    return 0;
}
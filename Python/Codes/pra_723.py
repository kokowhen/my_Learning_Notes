#面向对象编程

#类  对象  方法  属性  封装  继承  多态
#创建类的时侯会随之一些概念：成员变量和成员函数
#创建对象的过程称之为实例化对象
#一个被创建的对象包含三个方面的特性：对象的句柄、属性、方法
#对象的句柄用于区分不同的对象n1，n2就是句柄
#对象的属性就是类当中定义的变量，name和a都是变量
#对象的方法就是定义类的时候定义的函数，f()是函数
#全局变量和局部变量


#class更抽象一点，把variables和functions封装起来，其中variables就是类的属性，functions就是类的方法

#封装：对外部世界隐藏对象的工作细节
#继承：继承使子类具有和父类一样的属性和方法，而不需要编写同样的代码
#多态：为不同的数据类型的实体提供统一的接口

class test:
	name="Jeffery"
	def f(self):
		a="Jacky"
		return a

n1=test()	#类里的其中一个对象	
print(n1.name)
print(n1.f())

n2=test()	#类里的另外一个对象
print(n2.f())
print(n2.name)



#函数的全局变量和局部变量



def fun1():
	a=100
	print(a)
	a=200
	print(a)

fun1()


a=300
def fun2():
	global a
	a=200
	print(a)

def fun3():
	print(a)


fun2()
fun3()

































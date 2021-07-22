#面向对象
#很多对象构成一个类，而类在实例化后就是一个对象
#类定义了对象的公共属性和方法


class test1:
	def f(q,a,b):						#这种情况下第一参数不用self也可以，因为self不是Python的关键字，但是好像必须是字符串						
										#类的方法与普通的函数只有一个特别的区别：它们必须有一个额外的第一个参数名称, 按照惯例它的名称是self
		return a*b

x=test1()
print(x.f(4,5))


class test2:
	def __init__(self,c,d):				#self后面的参数是自定义的
		self.cp=c
		self.dp=d
		self.ep=c*d

y=test2(4,5)
print(y.ep)


#看看类里有多个函数的
class test3:
	def f1(self):
		return "Jeffery"

	def f2(self):
		return 23

	def fs(self):
		return "UESTC"

z=test3()
print(z.f1(),z.f2(),z.fs())
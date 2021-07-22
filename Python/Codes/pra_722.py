#面向对象
class test1:
	def f(s,a,b):
		return a*b

x=test1()
print(x.f(4,5))


class test2:
	def __init__(self,c,d):
		self.c=c
		self.d=d
		self.e=c*d

y=test2(4,5)
print(y.e)
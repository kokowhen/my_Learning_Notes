#面向对象
class test:

	n="Jeffery"
	a=24
	U=["KUST","UESTC"]

	def f(self,c,d):
		e=c*d
		return c*d

x=test()

print(x.n,x.a,x.U[1],x.f(3,4))
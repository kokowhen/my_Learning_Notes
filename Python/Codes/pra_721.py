#今天晚上的练习
#计算一元二次方程的解
import math


def cal(a,b,c):
	v=(b**2)-(4*a*c)

	if a == 0 :
		x_1=-c/b
		print("方程为一次方程，解为：X=",end="")
		return x_1


	else:
			
		if v < 0 :
			print("方程无解")
			return ""


		elif v ==0 :
			x_1=-b/(2*a)
			print("方程有两个相同解：X1=X2={}".format(x_1))
			return x_1
			
		else: 
			v1=math.sqrt(v)
			x1=(-b+v1)/(2*a)
			x2=(-b-v1)/(2*a)
			print("方程有两个不同解：X1={},X2={}".format(x1,x2))
			return x1,x2

results=cal(1,-9,4)

		

#今天晚上的练习
#继续学习git的操作
#有时间整理一下这几天的截图并汇总成笔记思维导图
#C++的学习
#Python的学习

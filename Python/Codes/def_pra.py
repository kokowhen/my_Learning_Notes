#函数的学习
#返回多个值的函数
def test(a,b,c):
	shan=a//b
	yushu=a%b
	jia=a+c
	jian=a-c
	return shan,yushu,jia,jian

s,y,jia,jian=test(4,7,9)	#多个返回值的接收
print(s,y,jia,jian)		#返回每一个return对应的结果
print(s)				#返回return shan 对应的结果

#1.
def pl():
	return "-"
result=pl()
print(result)

for i in range(10):
	for j in range(i):
		print("-",end="")		#其实一直困惑的根据行号打印对应的东西是靠print(end="")和print()实现的
	print()












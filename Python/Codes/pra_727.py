names = ["Jeffery","Jacky","Gina"]
for name in names:
	print("Hi,"+name+",nice to meet you")

#创建一个1~10的数字平方列表

sqrtlist = []
for number in list(range(1,11)):
	sqrt = number**2
	sqrtlist.append(sqrt)
print(sqrtlist)

#使用列表解析的方法输出前面一样的效果

NewSqrt = [number**2 for number in list(range(1,11))]
print(NewSqrt)


#创建一个包含1~1000000数字的列表，并输出其最大最小值以及和

nlist = list(range(1,1000001))
print(min(nlist))
print(max(nlist))
print(sum(nlist))

#那计算1~100的和只用这样就行了
nlist = list(range(1,101))
print(sum(nlist))
#一行代码实现1~100求和
print(sum(list(range(1,101))))

#打印出1~100中能被3整除的所有数字

for i in range(1,101):
	if i%3 == 0:
		print(i,end=" ")
print()

#打印出一个包含1~100中所有能被3整除的列表

nlist = list(range(3,101,3))
for i in nlist:
	print(i,end=" ")
print()





























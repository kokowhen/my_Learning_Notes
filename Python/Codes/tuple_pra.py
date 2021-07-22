#元组pra
#元组里的元素是不能修改的

tup=()			#创建空的元组
print(type(tup))

tup1=(50)		#创建的不是元组类型
print(type(tup1))	

tup2=("Jeffery",24,"UESTC",24+9)
print(tup2[1:3])		#切片：左闭右开,和列表一样
print(tup2[-1])		#访问最后一个元素

#增
tup3=(3,4)
tup_new=tup2+tup3
print(tup_new)			#两个元组合并，实现增加元组里元素的效果

#删
del tup_new
#print(tup_new)			#报错，直接把整个元组都删除了

a=[1,2,3,4]
print(a[0:3])









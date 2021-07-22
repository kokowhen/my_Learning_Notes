#字典pra
#特点：具有极快的查找速度；键值唯一，不能重复


infor={"name":"Jeffery","age":24,"university":"UESTC"}
#字典的访问：键值对的方式
print(infor["name"])

#访问了不存在的值，直接访问会报错，但是可以通过get设置
print(infor.get("gender","j"))


#增：直接通过定义键值对增加字典的元素
infor["bobby"]="guitar"
print(infor)

#删：1.del：删除的是整个键值对
#	 2.clear：得到一个空的字典

infor["salary"]=40000		#先增进去一个键值对
print(infor)
del infor["salary"]
print(infor)		#"salary"和"40000"都删除了
#infor.clear()
#print(infor)


#查：键的查询和值的查询keys,values,items
print(infor.keys())			#键的遍历
print(infor.values())		#值的遍历
print(infor.items())		#键值对的遍历


for key in infor.keys():	#字典和循环的结合
	print(key)

for value in infor.values():
	print(value)

for key,value in infor.items():
	print("key=%s,value=%s"%(key,value))


#我们知道，如果要打印列表的下标，使用while循环的方法是不太方便的，那么就可以用for循环和枚举函数enumerate结合完成

mylist=[1,2,3,4,5,"six"]
for i,j in enumerate(mylist):
	print(i,":",j)		#同时返回值和元素下标




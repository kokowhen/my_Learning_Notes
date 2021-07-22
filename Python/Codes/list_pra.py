namelists=[1,2,3,"小明","k"]					#数据的操作：增、删、改、查、排、反
i=0
for namelist in namelists:
	while i<5:
		namelists.append("jeffery")			#append是在列表的末尾增加元素，默认把增加的对象当作一个元素
		i+=1
b=[90,100]
namelists.append(b)
print(namelists)
print(namelists[2:8:3])						
namelists.extend(b)							#extend是把a列表里的元素逐一增加到b列表的末尾
namelists.insert(4,"jacky")					#insert是指定增加元素位置的方式增加
print(namelists)

songNames=["手写的从前","简单爱","以父之名","牛仔很忙","彩虹","最长的电影"]
for songName in songNames:
	print(songName)
del songNames[2]							#del删除指定位置元素
print(songNames)
songNames.pop()								#pop删除列表末尾最后一个元素
print(songNames)							
songNames.remove("手写的从前")				#remove删除列表中特意指定的元素
print(songNames)

bookNames=["小狗钱钱","时间简史","解读基金","1984","老人与海","炼金术士","时间简史","解读基金","1984","老人与海","炼金术士"]
for bookName in bookNames:
	print(bookName)
bookNames[2]="j1's story"							#直接修改，比较简单
print(bookNames)
i="j1's story"
if i in bookNames:							#if in查找，返回判断的结果 
	print("yes")
else:
	print("no")
a=bookNames.index("小狗钱钱")
print(a)
a=bookNames.index("小狗钱钱",0,5)			#index可以指定查找的区间，但是要确定查找的内容在区间内，不然会报错，返回对应元素被的下标
											#注意区间是左闭右开的
a=bookNames.count("shijianjianshi")
print(a)
a=bookNames.count("时间简史")				#count查找某个元素在列表中出现的个数，返回指定元素在列表中出现的个数
print(a)
bookNames.reverse()							#自身只是None值，反转列表里的元素排序位置																						
print(bookNames)
bookNames.sort()							#sort排序，注意升序和降序怎么用
print(bookNames)
bookNames.sort(reverse=True)				#T一定要大写
print(bookNames)


a=[["A","B","C","D"],["E","F"],["G"]]
for i in a:
	print(i)
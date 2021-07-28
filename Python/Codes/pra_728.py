
#使用标志判断程序是否继续

# prompt = "\nPlease tell me something,and I will repeat it back to you:\n"
# prompt += "\nEnter 'quit' to end the process.\n"

# active = True
# while active:
# 	message = input(prompt)

# 	if message == 'quit':
# 		active = False
# 	else:
# 		print(message)


#使用break退出循环

# prompt = "\nPlease tell me something,and I will repeat it back to you:\n"
# prompt += "\nEnter 'quit' to end the process.\n"

# while True:
# 	message = input(prompt)

# 	if message == 'quit':
# 		break
# 	else:
# 		print(message)


#continue语句的用法，符合就忽略continue语句后面的语句并返回到循环开头；不符合就执行continue后面的语句

a=0
while a < 10:
	a += 1
	if a%2 == 0:
		continue
	else:
		print("%d is odd"%a)


a=0
while a < 10:
	a += 1
	if a%3 == 0:
		continue
	else:
		print("%d is e3number"%a)

#删除列表中所有指定元素

list = ["a","b","c","a","b"]
while "a" in list:
	list.remove("a")
print(list)

print(bool(""))


#让实参变成可选的

def muscians(first_name,last_nmae,middle_name=''):
	if middle_name:
		full_name = first_name + " " + middle_name + " " + last_nmae
	else:
		full_name = first_name + " " + last_nmae
	return full_name

first_musican = muscians("Jeffery","SHI")
print(first_musican)
second_muscian = muscians("Jacky","DAI","beyond")
print(second_muscian)

#while循环将列表当作标志，根据其布尔值判断程序的执行和停止

phonelist = ["iphone1","iphone2","iphone3","iphone4","iphone5"]
phone = []
while phonelist:
	temphone = phonelist.pop()
	phone.append(temphone)
print(phone)	

#洗衣服问题
#不用函数打印出需要洗的衣服以及洗好的衣服

unwashedclothes = ["red cloth","green cloth","black cloth"]
washedclothes = []
while unwashedclothes:
	temlist = unwashedclothes.pop()
	print("%s need to be washed"%temlist)
	washedclothes.append(temlist)

for cloth in washedclothes:
	print("%s has been washed"%cloth)

#使用函数的方法

unwashedclothes = ["red cloth","green cloth","black cloth"]
needwashclothes = []
def needwash():
	for cloth in unwashedclothes:
		needwashclothes.append(cloth)
		print("%s need to be washed"%cloth)

def washed():
	for cloth in needwashclothes:
		print("%s has been washed"%cloth)


needwash()
washed()

#传递任意数量的实参

def letters(*a):
	print("my favorite letters are:")
	for letter in a:
		print(letter,end=" ")

letters("A","B","V","D","J")































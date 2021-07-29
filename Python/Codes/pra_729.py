#向函数传递列表

def greet_users(names):
	for name in names:
		msg = "Hello,"+ name +"!"
		print(msg)
usernames = ["hannah","ty","margot","Jeffery"]
greet_users(usernames)

#在函数中修改列表

#传递任意数量的实参
#1.结合使用位置实参和任意数量实参

def song(author,*songname):
	print("{}'s song :\n{}".format(author,songname))


song("zhoujielun","J","K","l")#所有值会存储在元组songname中

#2.使用任意数量的关键字实参
def build_profile(first_name,last_nmae,**user_info):
	profile = {}

	profile["first_name"] = first_name
	profile["last_nmae"]= last_nmae

	for key,value in user_info.items():
		profile[key]  = value	#将实参键值对传入到形参空字典user_info中，并将字典user_info里的键值对传入到字典profile中
	return profile

user_profile = build_profile("Jeffery","SHI",location="Chendu",field="CS",hobby="guitar")
print(user_profile)


#将函数存储在模块中
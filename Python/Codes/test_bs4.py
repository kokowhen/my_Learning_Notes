
#把网页的内容提取出来

from bs4 import BeautifulSoup
import re

file = open("./test.html","rb")
html = file.read()
bs = BeautifulSoup(html,"html.parser")

#1.find_all()查找

#1.1字符串过滤：会查找与字符串完全匹配的内容
t_list = bs.find_all("a",limit=30)		
for item in t_list:
	print(item)

print("——"*200)

#1.2正则表达式搜索：使用search()方法进行匹配

t_list = bs.find_all(re.compile("a"))
for item in t_list:
	print(item)

print("——"*200)


#1.3传入函数进行搜索，根据函数的方法进行搜索

def name_is_exists(tag):
	return tag.has_attr("elememt")

t_list = bs.find_all(name_is_exists)

print(t_list)


#2.keywords()查找






# print(bs.title)
# #print(bs.title.string)
# print(bs.a)
# print(bs.head)
# #print(bs.head.string)
# print(type(bs.head))		#标签及其内容:拿到它所找到的第一个内容

# print(bs.title.string)
# print(bs)
# print(bs.string)
# print("-"*30)
# print(bs.head.contents)
# print(bs.head.contents[1])


















































import urllib.request
from bs4 import BeautifulSoup
import re
import time

#解析网页
#先爬取一个网页的源码

url = "https://blog.csdn.net/nav/python"

headers = {"user-agent":"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/91.0.4472.164 Safari/537.36"}

req = urllib.request.Request(url=url,headers=headers)

response = urllib.request.urlopen(req).read().decode("utf-8")

#爬取到的网页源码已经存储到变量response中
#print("-"*200)


information = re.compile(r'(.*?)</div>')

bs = BeautifulSoup(response,"html.parser")#得到的是树形结构
for item in bs.find_all("li",class_="clearfix"):
	item = str(item)
	infor = re.findall(information,item)
	print(infor[5:6])
# print(bs)
# print("_"*100)


# #文档的遍历

# c_list = bs.head.contents
# print(c_list)#返回的是一个列表
# print("_"*100)
# print(c_list[5])


#文档的搜索

#(1)fina_all()
#字符串过滤的方式：会查找与字符串完全匹配的内容
# t_list = bs.find_all("a")#找到所有a标签

# #正则表达式搜索，使用search()方法匹配内容
# t_list = bs.find_all(re.compile("a"))
# print(t_list)
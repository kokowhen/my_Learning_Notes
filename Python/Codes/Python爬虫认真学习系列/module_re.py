import re
import urllib.request


#先理解re正则表达式的用法

contents = 'sd125845csefr81^&^*(^++_+)+_+0-9+%drg166d6sd511s615rs 	ldcsd22-——_'
rerules = re.compile('\d')#封装规则，匹配数字字符
rerules1 = re.compile('\D')#匹配非数字字符
numbers = re.findall(rerules,contents)
not_numbers = re.findall(rerules1,contents)
print(numbers)
print(not_numbers)

#提取response里需要的信息

#伪装浏览器对百度进行访问请求并返回响应

url = 'https://www.baidu.com/'
headers = {'User-Agent':'Mozilla/5.0 (Windows NT 6.1; WOW64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/86.0.4240.75 Safari/537.36'}
req = urllib.request.Request(url=url,headers=headers)
response = urllib.request.urlopen(req).read().decode('utf-8')
# print(response)

#封装正则表达式的提取规则
hot_news_name_rules = re.compile(r'<span class="title-content-title">(.*)</span>')
hot_news_name = re.findall(hot_news_name_rules,response)
print(hot_news_name)
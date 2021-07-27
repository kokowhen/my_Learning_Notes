

#urllib库的学习

import urllib.request

url = "https://www.17jita.com/"#要爬取的网页

#将自己伪装成一个浏览器对网页发出访问请求
headers = {"user-agent":"Mozilla/5.0 (Windows NT 6.1; WOW64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/86.0.4240.75 Safari/537.36"}
req = urllib.request.Request(url=url,headers=headers)
response = urllib.request.urlopen(req)


print(response.read().decode("gbk"))#GBK规范收录了ISO 10646.1 中的全部CJK汉字和符号,并有所补充，看爬取的网页编码是否需要decode("gbk")，一般decode("utf-8")即可






import urllib.request



#获取一个get请求

# respond = urllib.request.urlopen("https://www.baidu.com")
# print(respond.read().decode("utf-8"))

#获取一个post请求

# import urllib.parse
# data = bytes(urllib.parse.urlencode({"hello":"world"}),encoding="utf-8")
# respond = urllib.request.urlopen("http://httpbin.org/post",data=data)
# print(respond.read().decode("utf-8"))


#超时处理


# try:
# 	respond = urllib.request.urlopen("http://httpbin.org/get",timeout=0.1)
# 	print(respond.read().decode("utf-8"))
# except urllib.error.URLError as e:
# 	print("timeout!")


# respond = urllib.request.urlopen("http://www.baidu.com")
# print(respond.getheaders())

#将自己伪装成一个浏览器

# url = "http://httpbin.org/post"

# headers = {"useragent":"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/91.0.4472.164 Safari/537.36"}
# #url = "https://www.douban.com"
# data = bytes(urllib.parse.urlencode({"name":"eric"}),encoding="utf-8")
# req = urllib.request.Request(url=url,data=data,headers=headers,method="POST")
# respond = urllib.request.urlopen(req)
# print(respond.read().decode("utf-8"))


url = "http://www.douban.com"

headers = {"User-Agent":"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/91.0.4472.164 Safari/537.36"}
req = urllib.request.Request(url=url,headers=headers)
response = urllib.request.urlopen(req)
print(response.read().decode("utf-8"))












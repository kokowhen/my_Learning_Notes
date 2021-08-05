import urllib.request

#对百度进行访问请求并返回响应，这里注意Python的文件名不能和库的名字相同

url = 'https://www.baidu.com/'
response = urllib.request.urlopen(url)
print(response.read().decode('utf-8'))

#伪装浏览器对百度进行访问请求并返回响应

headers = {'User-Agent':'Mozilla/5.0 (Windows NT 6.1; WOW64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/86.0.4240.75 Safari/537.36'}
req = urllib.request.Request(url=url,headers=headers)
response = urllib.request.urlopen(req)
print(response.read().decode('utf-8'))

#伪装浏览器对扇贝进行访问请求并返回响应

url1 = 'https://www.shanbay.com/'
headers1 = {'user-agent':'Mozilla/5.0 (Windows NT 6.1; WOW64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/86.0.4240.75 Safari/537.36'}
req1 = urllib.request.Request(url=url1,headers=headers1)
response = urllib.request.urlopen(req1)
print(response.read().decode('utf-8'))

#伪装浏览器对晨星基金网进行访问请求并返回响应

url2 = 'https://www.morningstar.cn/cover/school.aspx'
req2 = urllib.request.Request(url=url2,headers=headers)
response = urllib.request.urlopen(req2)
print(response.read().decode('utf-8'))
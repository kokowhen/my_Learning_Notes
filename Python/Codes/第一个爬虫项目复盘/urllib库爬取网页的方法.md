# urllib

## 导入urllib模块：

- import urllib.request

## 复制需要爬取网页的链接

- url = "网页链接"

## 将自己伪装成一个浏览器向网页发送访问请求

- headers = {" "," " }

- req = urllib.request.Request(url=url,headers=headers)

## 爬取网页

- response = urllib.request.urlopen(req)

## 将爬取到的网页解码打印

- print(response.read( ).decode("utf-8"/"gbk"))
# bs4 html.parser 网页源码解析模块：根据需求提取出html文件的一部分

## 先获得一段html代码/一个html文件

- 直接下载或者复制源码得到的html文件
- 通过urllib.request获取到的源码response

## 通过bs模块将得到的html代码转化为树形结构的对象

- bs = BeautifulSoup(response,"html.parser")

## 文档的搜索

- 正则表达式和bs.find_all配合使用






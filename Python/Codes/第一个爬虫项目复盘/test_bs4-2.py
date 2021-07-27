from bs4 import BeautifulSoup
import re
import urllib.request


#urllib.request爬取网页
url = "https://search.bilibili.com/all?keyword=%E5%91%A8%E6%9D%B0%E4%BC%A6&from_source=webtopsuggest_search&spm_id_from=333.851.b_62696c6962696c692d7365617263682d73756767657374.1"

headers = {"user-agent":"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/91.0.4472.164 Safari/537.36"}

req = urllib.request.Request(url=url,headers=headers)

response = urllib.request.urlopen(req).read().decode("utf-8")

#print(response)


#re.compile()根据爬取的内容指定正则表达式的规则
titlerule = re.compile(r'</span>.*title="(.*?)".*</a></div><div class="des hide">')

#BeautifulSoup逐一解析数据；找到符合要求的字符串并将其存储到列表中
bs = BeautifulSoup(response,"html.parser")

#print(bs)

titlelist = bs.find_all("li",class_="video-item matrix")#这里我们得到了所有满足标签为div以及class="item"下的数据，并将其存储在列表namelist中


#print(titlelist)

#接下来我们就可以将列表里的每一个元素遍历，并利用正则表达式的规则查找并提取需要的内容
for item in titlelist:
	item = str(item)#这里一定要将元素转化为字符串
	#print(item)
	name = re.findall(titlerule,item)
	print(name)
	# for each in name:
	# 	print(each)
	




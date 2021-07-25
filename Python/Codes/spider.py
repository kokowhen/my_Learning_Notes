#程序执行的入口

from bs4 import BeautifulSoup			#网页解析
import re								#正则表达式
import urllib.request,urllib.error		#制定url，获取网页数据
import xlwt								#进行excel操作
import sqlite3							#进行SQLite操作


def main():

	baseurl = "https://movie.douban.com/top250?start="
	#steeps:
	#1.爬取网页
	datalist = getData(baseurl)
	savepath = "豆瓣电影Top250.xls"
	#2.解析数据
	#3.保存数据
	saveData(datalist,savepath)
	#askURL("https://movie.douban.com/top250?start=")

#影片正则表达式的规则

#影片详情的规则
findlink = re.compile(r'<a href="(.*?)">')#创建正则表达式对象，表示规则(字符串的模式)
#影片图片的规则
findImagSrc = re.compile(r'<img.*src="(.*?)"',re.S)#re.S的作用是忽略换行符，让换行符包含在字符中
#影片的片名规则
findTitle = re.compile(r'<span class="title">(.*)</span>')
#影片的评分规则
findRating = re.compile(r'<span class="rating_num" property="v:average">(.*)</span>')
#影片的评价人数规则
findJudge = re.compile(r'<span>(\d*)人评价</span>')
#影片的概况规则
findInq = re.compile(r'<span class="inq">(.*)</span>')
#影片的相关内容规则
findBd = re.compile(r'<p class="">(.*?)</p>',re.S)



#爬取网页
def getData(baseurl):
	datalist = []

	for i in range(0,10):		#调用获取页面信息的函数，10次
		url = baseurl + str(i*25)
		html = askURL(url)		#保存获取到的网页源码



	#逐一解析数据

		soup = BeautifulSoup(html,"html.parser")
		for item in soup.find_all("div",class_="item"):		#查找符合要求的字符串，形成列表
			#print(item)			#测试：查看电影item
			data = []	#保存一部电影全部信息
			item = str(item)
			# print(item)	#以下两句代码是为了方便写正则表达式而打印的
			# break


			#获取影片详情的超链接

			link = re.findall(findlink,item)[0]		#re库用来通过正则表达式查找指定的字符串
			data.append(link)						#添加链接

			imgSrc = re.findall(findImagSrc,item)[0]
			data.append(imgSrc)						#添加图片
		
			titles = re.findall(findTitle,item)		#片名可能只有一个中文名，没有外文名
			if (len(titles) == 2):
				ctitle = titles[0]
				data.append(ctitle)			#添加英文名
				ftitle = titles[1].replace("/","")#去掉无关符号
				data.append(ftitle)			#添加外文名
			else:
				data.append(titles[0])
				data.append(" ")		#外文名留空

			rating = re.findall(findRating,item)[0]
			data.append(rating)			#添加评分

			judgeNum = re.findall(findJudge,item)[0]
			data.append(judgeNum)		#添加评价人数

			inq = re.findall(findInq,item)
			data.append(inq)			#添加概述
			if (len(inq) != 0):
				inq = inq[0].replace("。","")		#去掉句号
				data.append(inq)	
			else:
				data.append(" ")		#留空

			bd = re.findall(findBd,item)[0]
			bd = re.sub("<br(\s+)?/>(\s)"," ",bd)		#去掉<br/>
			bd = re.sub("/"," ",bd)		#替换
			data.append(bd.strip())	#去掉前面的空格


			datalist.append(data)		#把处理好的一部电影信息放入datalist

		#print(datalist)
	return datalist


#得到指定一个URL的网页内容
def askURL(url):
	head={
	"User-Agent":"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/91.0.4472.164 Safari/537.36"
	}
	request = urllib.request.Request(url,headers=head)

	try:
		respond = urllib.request.urlopen(request)
		html = respond.read().decode("utf-8")
		#print(html)
	except urllib.error.URLError as e:
		if hasattr(e,"code"):
			print(e.code)
		if hasattr(e,"reason"):
			print(e.reason)

	return html
	

#保存数据
def saveData(datalist,savepath):

	print("save .....")


	book = xlwt.Workbook(encoding="utf-8",style_compression=0)	#创建workbook对象
	sheet = book.add_sheet("豆瓣电影Top250",cell_overwrite_ok=True)	#创建工作表
	col = ('电影详链接','图片链接','影片中文名','影片外文名','影片评分','评价数量','影片概况','相关信息')
	for i in range(0,8):
		sheet.write(0,i,col[i])#烈名
	
	for i in range(0,250):
		print("第%d条"%i)
		data = datalist[i]
		for j in range(0,8):
			sheet.write(i+1,j,data[j])

	book.save(savepath)


if __name__ == "__main__":		#函数执行入口
	#调用函数
	main()
	print("爬取完毕")


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
	savepath = ".\\豆瓣电影Top250.xls"
	#2.解析数据
	#3.保存数据
	#saveData(savepath)
	#askURL("https://movie.douban.com/top250?start=")


#爬取网页
def getData(baseurl):
	datalist = []

	for i in range(0,10):		#调用获取页面信息的函数，10此
		url = baseurl + str(i*25)
		html = askURL(url)		#保存获取到的网页源码



	#逐一解析数据
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
		print(html)
	except urllib.error.URLError as e:
		if hasattr(e,"code"):
			print(e.code)
		if hasattr(e,"reason"):
			print(e.reason)

	return html

	


















#保存数据
def saveData(savepath):

	print("save .....")





if __name__ == "__main__":		#函数执行入口
	#调用函数
	main()

























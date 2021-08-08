import re
import urllib.request


#先学习re正则表达式模块的基本用法

contents = 'dhsuue_237 jji _2rbhsjs'#匹配的内容
rules = '^\D+\d+\s'#匹配的规则
match_result = re.match(rules,contents)
# print(match_result)
# print(match_result.group())
# print(match_result.span())#re.match是用来判断字符串是否与正则表达式匹配的


#正则提取网页中需要的信息
#提取B站关于周杰伦播放量最高的视频信息，包括标题，观看数量，评论数，弹幕数

titlerules = '<li.*a\stitle="(.*?)"'
playrules = '.*playtime"></i>\n\s+(.*?)\n.*'
barragerules = '.*subtitle"></i>\n\s+(.*?)\n.*'
for i in range(5):
	url = 'https://search.bilibili.com/all?keyword=%E5%91%A8%E6%9D%B0%E4%BC%A6&from_source=webtophistory_search&spm_id_from=333.851.b_62696c6962696c692d7365617263682d686973746f7279.1&order=click&duration=0&tids_1=0&page='+str(i)
	headers = {'user-agent':'Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/92.0.4515.131 Safari/537.36'}
	req = urllib.request.Request(url=url,headers=headers)
	response = urllib.request.urlopen(req).read().decode('utf-8')
	# print(response)

	
	titles = re.findall(titlerules,response)
	# print(titles)
	for title in titles:
		print(title)

	
	plays = re.findall(playrules,response)
	for play in plays:
		print(play)


	barrages = re.findall(barragerules,response)
	for barrage in barrages:
		print(barrage)
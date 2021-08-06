import re
import urllib.request


#先学习re正则表达式模块的基本用法

contents = 'dhsuue_237 jji _2rbhsjs'
res = re.match('^dh.*\d+\s.*\s\D\d.*js$',contents)
print(res)
print(res.group())
print(res.span())#re.match是用来判断字符串是否与正则表达式匹配的

#re模块，通过正则表达式的写法将自己需要的字符串筛选出来，配合bs4模块一起使用

import re

# #先re.compile再查找

model = re.compile("sheet")#正则表达式的模板，需要找的内容
f = model.search("hbsbcsjncsjnBJHNKJsheetBJDBKDJNJcjhdbcsmnkSHEETsheetnekj")#被查找的字符串，返回第一个查找到的正则表达式
print(f)
s = model.search("nsjcbsknckscnuscbschbsujcbsksoibshjbsknsvnsjhbvsncos")#如果字符串里没有查找的对象，返回None
print(s)

# #直接查找，re.search(a,b)，a是模板，b是被检验的字符串

t = re.search("ss","jnsjncksnjkjsnjcssjcbsjcbsjjncskjshbsjvksj")
print(t)

# #前面的几种方法都是返回正则表达式
# #利用re.findall()则可以返回所有匹配的字符串列表

f = re.findall("d","jdnkcdanjckdnackjadkjncdjncjkncdjk")
print(f)







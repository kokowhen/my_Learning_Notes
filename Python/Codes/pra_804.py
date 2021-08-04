#学着从本地IDE查看Python帮助文档

import re

#help(re)

#re是regular expressions的缩写
#re模块的绝大多数重要的应用，总是会先将正则表达式编译，之后再进行操作

a = re.compile('a')#将正则表达式的样式编译为一个正则表达式对象，可以用于匹配
b = a.search('bndaadaaajdks')
c = a.findall('ncdbjkanazncjkjnzzakd')
print(b)
print(c)

#Unicode是包含了全世界符号的字符集

#高级使用
a = re.compile(r'')
#文件的操作

#读取demo.tex文件并打印每一行的字符串(readlines的用法)

import time

f = open("demo.txt","r")

ls = f.readlines()

i=1
for temp in ls:
	print("%d:%s"%(i,temp))
	time.sleep(0.5)
	i+=1

f.close()
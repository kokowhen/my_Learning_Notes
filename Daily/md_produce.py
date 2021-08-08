#自动生成md文件并写入指定内容发的脚本

import os

for i in range(8,32):
	if i<10 :
		filename = '0'+str(i)+'_August'+'.md'
	else:
		filename = str(i)+'_August'+'.md'
	f = open('C:\\Users\\sjy\\Desktop\\CodeLife\\Daily\\'+filename,'w')
	f.write('# 今天的学习计划\n')
	f.write('- **sjy**\n')
	f.write(' \n')
	f.write('# 实际完成情况\n')
	f.write('- **sjy**\n')
	print(filename)
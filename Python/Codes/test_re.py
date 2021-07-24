#正则表达式：字符串模式(判断字符串是否符合一定的标准)



import re
#创建模式对象

pat = re.compile("AA")		#此处的AA是正则表达式，原来检验其他的字符串
m= pat.search("ABCAA")

print(m)

n = pat.search("AANNGHHFGAAGFHSI")
print(n)

I = re.search("asd","Aasd")			#前面的字符串是规则(模板)，后面的字符串是被校验的对象
print(I)

J = re.findall("a","ADGSHUaGAFSa")	#前面字符串是规则(正则表达式)，后面字符串是被校验的字符串
print(J)

K = re.findall("[a-z]","AFBSWUSNIWSNbsahdnHBJSBvgshAHXBHBHsbbhsBSHXHSxhbxshnxbHBXshnxhJBXSJH")
print(K)

K = re.findall("[a-z]+","AFBSWUSNIWSNbsahdnHBJSBvgshAHXBHBHsbbhsBSHXHSxhbxshnxbHBXshnxhJBXSJH")
print(K)

L = re.sub("s","J","sGHJBJSHsshjBGHSHggbgbsbxhbxanjnanajnshbahcajcshsnjhbchdsjbjshcchdb")#找到a用A替换，在第三个字符串中查找A
print(L)

#建议在正则表达式中，被比较的字符串前面加上r，不要担心转义字符的问题

a = r"\addbddjus-\'"
print(a)






#输入一个年份，判断是平年还是润年

# year = int(input("请输入年份："))
# if ((year%400==0) or ((year%4==0) and (year%100!=0))):
# 	print("%d年是润年"%year)
# else:
# 	print("%d年是平年"%year)

#输入一个分数，判断其等级

#打印菱形

for i in range(1,12):
	if i<7:
		print(" "*(7-i),end="")
		print("*"*(2*i-1))
	else:
		print(" "*(i-5),end="")
		print("*"*((11-i)*2+1))
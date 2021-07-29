import pizza 		#直接导入模块
				
pizza.make_pizza(16,"peperoni")
pizza.make_pizza(12,"mushrooms","green pepers","extra cheese")

print("-"*100)

from pizza import make_pizza	#导入模块里的某个函数，导入模块里的所有函数from pizza import *

make_pizza(14,"ice cream")
make_pizza(15,"soda")

print("-"*100)

from pizza import make_pizza as sb	#导入模块里的某个函数并给函数指定别名

sb(11,"green pepers")
sb(20,'hungary')
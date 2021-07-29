#先创建一个模块，这个模块包含我们要调用的函数

def make_pizza(size,*toppings):

	print("\nMaking a " + str(size) + 
		"-inch pizza with the following toppings:")

	for topping in toppings:
		print("-"+topping)
		#print("",end="")



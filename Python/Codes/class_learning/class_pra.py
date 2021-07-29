#创建类和使用类

#创建Dog()类

class Dog():
	#一次模拟小狗的简单尝试
	def __init__(self,name,age):
		#初始化属性name和age
		self.name = name
		self.age = age

	def sit(self):
		#模拟小狗被命令时蹲下
		print(self.name + " is now sitting!")

	def roll_over(self):
		#模拟小狗被命令时打滚
		print(self.name + " rolled over!")

#类中的函数称为方法 __int__(self,name,age)、sit(self)、roll_over(self)都是方法
#方法中形参变量self必不可少，__int__()是一个特殊的方法，每次根据Dog类创建实例时，Python都会自动运行它


#根据Dog()类创建实例my_dog

my_dog = Dog("whillie",5)
print("My dog's nanme is "+ my_dog.name + ".")
print("My dog is " + str(my_dog.age) + " years old.")

#访问属性
print(my_dog.name)
print(my_dog.age)

#调用方法
my_dog.sit()
my_dog.roll_over()

print("-"*50)

#创建多个实例
my_dog = Dog("whillie",6)
your_dog = Dog("lucy",4)
print("My dog's nanme is "+ my_dog.name + ".")
print("My dog is " + str(my_dog.age) + " years old.")
my_dog.sit()
my_dog.roll_over()

print("-"*50)

print("Your dog's nanme is "+ your_dog.name + ".")
print("Your dog is " + str(your_dog.age) + " years old.")
your_dog.sit()
your_dog.roll_over()

print("-"*50)

#Car类

class Car():
	#一次模拟汽车的简单尝试
	def __init__(self,make,model,year):
		#初始化汽车属性
		self.make = make
		self.model = model
		self.year = year

	def get_descriptive_name(self):
		#返回整洁的描述信息
		long_name = str(self.year) + ' ' + self.make + ' ' + self.model
		return long_name

my_new_car = Car('audi','a4','2016') 
print(my_new_car.get_descriptive_name())

print("-"*50)

#给属性指定默认值

#类中的每个属性都有初始值，一般在__init__()中进行属性初始化

class Car():
	#一次模拟汽车的简单尝试
	def __init__(self,make,model,year):
		#初始化汽车属性
		self.make = make
		self.model = model
		self.year = year
		self.odometer_reading = 0#设置汽车的里程数初始值为0

	def get_descriptive_name(self):
		#返回整洁的描述信息
		long_name = str(self.year) + ' ' + self.make + ' ' + self.model
		return long_name
	def read_odometer(self):
		#打印一条指出汽车里程数的消息
		print("This car has " + str(self.odometer_reading) + " miles on it.")

my_new_car = Car('audi','a4','2016') 
print(my_new_car.get_descriptive_name())
my_new_car.read_odometer()
print("-"*50)

#修改属性的值

#1.直接修改属性的值
my_new_car.odometer_reading = 23
my_new_car.read_odometer()
print("-"*50)

#2.通过方法修改属性的值
class Car():
	def __init__(self,make,model,year):
		#初始化汽车属性
		self.make = make
		self.model = model
		self.year = year

	def get_descriptive_name(self):
		#返回整洁的描述信息
		long_name = str(self.year) + ' ' + self.make + ' ' + self.model
		return long_name

	def update_odometer(self,mileage):
		"将里程表读数设置为指定的值"
		self.odometer_reading = mileage

	def read_odometer(self):
		#打印一条指出汽车里程数的消息
		print("This car has " + str(self.odometer_reading) + " miles on it.")

my_new_car = Car('audi','a4','2016')
print(my_new_car.get_descriptive_name()) 
my_new_car.update_odometer(25)
my_new_car.read_odometer()
print("-"*50)

#3.通过方法对属性的值进行递增

class Car():
	def __init__(self,make,model,year):
		#初始化汽车属性
		self.make = make
		self.model = model
		self.year = year

	def get_descriptive_name(self):
		#返回整洁的描述信息
		long_name = str(self.year) + ' ' + self.make + ' ' + self.model
		return long_name

	def update_odometer(self,mileage):
		"将里程表读数设置为指定的值"
		self.odometer_reading = mileage

	def read_odometer(self):
		#打印一条指出汽车里程数的消息
		print("This car has " + str(self.odometer_reading) + " miles on it.")

	def increment(self,miles):
		#将里程数增加指定的量
		self.odometer_reading += miles
my_used_car = Car("subaru","outback","2013")
print(my_used_car.get_descriptive_name())

my_used_car.update_odometer(23500)
my_used_car.read_odometer()

my_used_car.increment(100)
my_used_car.read_odometer()
"""
Python数据类型转换可以分为两种
隐式类型转换 - 自动完成
显示类型转换 - 需要使用类型函数来转换
"""

# 隐式类型转换
# 实例1：整数转换为浮点数,较低数据类型转换为较高数据类型,以避免数据丢失
num_int = 123
num_flo = 1.23
num_new = num_int + num_flo

print("num_int数据类型为:", type(num_int))
print("num_flo数据类型为:", type(num_flo))
print("num_new值为:", num_new)
print("num_new数据类型为:", type(num_new))

# 实例2: 整形数据与字符串类型的数据进行相加
num_int = 123
num_str = "456"
print("num_int数据类型为:", type(num_int))
print("type(num_str)数据类型为:", type(num_str))
# print(num_int+num_str)
# 整形和字符串类型运算结果会报错,输出TypeError.
# python在这种情况下无法使用隐式转换
# 但是,Python可以进行显示转换
# 显式类型转换
# 实例3:int()强制转换为整数
z = int(1)
y = int(2.8)
z = int("3")
# 实例4:float()强制转换为浮点数
x = float(1)
y = float(2.8)
z = float("3")
w = float("4.2")
# 实例4:str()强制转换为字符串
x = str("s1")
y = str(2)
z = str(3.0)
# 整型和字符串类型进行运算,可以使用强制类型转换完成
num_int = 123
num_str = "456"
print("num_int数据类型为:", type(num_int))
print("type(num_str)数据类型为:", type(num_str))
num_str = int(num_str)
print("类型转换后num_str数据类型为:", type(num_str))
num_sum = num_int + num_str
print("num_sum值为:", num_sum)
print("num_sum数据类型为:", type(num_sum))

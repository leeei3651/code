"""
Python数字数据类型用于存储数值
数据类型是不允许改变的,这就意味着如果改变数字数据类型的值，将重新分配内存空间。
以下实例在变量赋值时 Number 对象将被创建：
var1 = 1
var2 = 10
你也可以使用del语句删除一些数字对象的引用。
del语句的语法是:
del var1[,var2[,var3[....,varN]]]
你可以通过使用del语句删除单个或多个对象的引用,例如:
del var
del var_a, var_b
Python支持三种不同的数字类型:
- 整型(Int) - 通常被称为是整型或整数,是正或负整数,不带小数点。Python3 整型是没有限制大小的，可以当作 Long 类型使用，所以 Python3 没有 Python2 的 Long 类型。
- 浮点型(float) - 浮点型由整数部分与小数部分组成,浮点型也可以使用科学计数法表示(2.5e2 = 2.5 x 102 = 250)
- 复数( (complex)) - 复数由实数部分和虚数部分构成,可以用a + bj,或者complex(a,b)表示, 复数的实部a和虚部b都是浮点型。

"""

# 我们可以使用十六进制和八进制来代表整数
# 导入math包
import math
import random


number = 0xA0F
print(number)  # 输出结果为 2575
number = 0o37
print(number)  # 输出结果为 31
# Python数字类型转换
# 有时候，我们需要对数据内置的类型进行转换，数据类型的转换，你只需要将数据类型作为函数名即可。
# 以下几个内置的函数可以执行数据类型之间的转换。这些函数返回一个新的对象，表示转换的值。
# 函数	描述
# int(x [,base])	将x转换为一个整数
# float(x)	将x转换到一个浮点数
# complex(real [,imag])	创建一个复数，real为实部，imag为虚部
# 将浮点数变量1转换为整数:
a = 1.0
print(int(a))  # 输出结果为 1
# Python数学运算
print(2 + 2)
print(50 - 5 * 6)
print((50 - 5 * 6) / 4)
print(8 / 5)  # 输出结果为 1.6
# 在整数除法中,除法总是返回一个浮点数,如果你只想得到整数的结果
# 丢弃可能的部分,可以使用运算符//
print(17 / 3)
print(17 // 3)
print(17 % 3)
print(5 * 3 + 2)
# //得到的并不一定是整数类型的数字,它与分母分子的数据类型有关系
print(7 // 2)
print(7.0 // 2)
print(7 // 2.0)
# 等号=用于给变量赋值.赋值之后,除了下一个提示符,解释器不会显示任何结果
# python可以用**操作进行幂运算
print(5**2)  # 输出结果为 25
print(2**7)  # 输出结果为 128
width = 20  # 宽度
height = 50  # 高度
print(width * height)  # 输出结果为 1000
# 变量在使用前必须要先'定义',否则会出现错误
# 不同类型的数混合运算会将整数转换为浮点数
print(3 * 3.75 / 1.5)
# 在交互模式中,最后被输出的表达式结果被赋值给变量_
# print(_) # 输出结果为 7.5
# 分隔线
print("-" * 50)
# python数学函数
# 以下是常用的Python数学函数:
# 函数	描述
# abs(x)	返回数字的绝对值,如abs(-10) 返回 10
# ceil(x)	返回数字的上入整数,如math.ceil(4.1) 返回 5
# cmp(x, y)	如果 x < y 返回 -1, 如果 x == y 返回 0, 如果 x > y 返回 1。Python 3 已废弃，使用 (x>y)-(x<y) 替换。
# exp(x)	返回e的x次幂(ex),如math.exp(1) 返回2.718281828459045
# fabs(x)	返回数字的绝对值,如math.fabs(-10) 返回10.0
# floor(x)	返回数字的下舍整数,如math.floor(4.9)返回 4
# log(x)	如math.log(math.e)返回1.0,math.log(100,10)返回2.0
# log10(x)	返回以10为基数的x的对数,如math.log10(100)返回 2.0
# max(x1, x2,...)	返回给定参数的最大值，参数可以为序列。
# min(x1, x2,...)	返回给定参数的最小值，参数可以为序列。
# modf(x)	返回x的整数部分与小数部分，两部分的数值符号与x相同，整数部分以浮点型表示。
# pow(x, y)	x**y 运算后的值。
# round(x [,n])	返回浮点数x的四舍五入值，如给出n值，则代表舍入到小数点后的位数。
# sqrt(x)	返回数字x的平方根，数字可以为负数，返回类型为实数，如math.sqrt(4)返回 2+0j
a = 2
b = 3
c = -2
d = -3
e = 1.5
f = 1.25
print(abs(c))
print(math.ceil(e))
print(a > b)
print(a < b)
print(a == b)
print(math.exp(1))
print(math.fabs(e))
print(math.floor(e))
print(math.log(1000, 10))
print(math.log10(1000))
print(max(a, b))
print(min(a, b))
print(math.modf(e))
print(pow(a, b))
print(round(e))
print(round(f, 2))
print(math.sqrt(9))
# 分隔线
print("-" * 50)
# 随机数函数
# 以下是常用的Python随机数函数:
# 函数	描述
# choice(seq)	从序列的元素中随机挑选一个元素,比如random.choice(range(10))从0到9中随机挑选一个整数。
# randrange ([start,] stop [,step])	从指定范围内，按指定基数递增的集合中获取一个随机数，基数默认值为 1
# random()	随机生成下一个实数，它在[0,1)范围内。
# seed([x])	改变随机数生成器的种子seed。如果你不了解其原理，你不必特别去设定seed，Python会帮你选择seed。
# shuffle(lst)	将序列的所有元素随机排序
# uniform(x, y)	随机生成下一个实数，它在[x,y]范围内。
print(random.choice(range(10)))
print(random.randrange(1, 10, 2))
print(random.random())
print(random.seed(10))
print("list:", random.shuffle([1, 2, 3, 4, 5, 6, 7, 8, 9, 10]))
print(random.uniform(1, 10))
# 分隔线
print("-" * 50)
# 三角函数
# 以下是常用的Python三角函数:
# 函数	描述
# acos(x)	返回x的反余弦弧度值。
# asin(x)	返回x的反正弦弧度值。
# atan(x)	返回x的反正切弧度值。
# atan2(y, x)	返回给定的 X 及 Y 坐标值的反正切值。
# cos(x)	返回x的弧度的余弦值。
# hypot(x, y)	返回欧几里德范数 sqrt(x*x + y*y)。
# sin(x)	返回的x弧度的正弦值。
# tan(x)	返回x弧度的正切值。
# degrees(x)	将弧度转换为角度,如degrees(math.pi/2) ， 返回90.0
# radians(x)	将角度转换为弧度
# 数字常量
# pi	数学常量 pi（圆周率，一般以π来表示）
# e	数学常量 e，e即自然常数（自然常数）。
print(math.acos(math.pi / 4))
print(math.asin(math.pi / 4))
print(math.atan(math.pi / 4))
print(math.atan2(1, 1))
print(math.cos(math.pi * 2 / 3))
print(math.hypot(3, 4))
print(math.sin(math.pi / 2))
print(math.tan(math.pi / 4))
print(math.degrees(math.pi / 4))
print(math.radians(90))

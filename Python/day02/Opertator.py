# Python算术运算符
# 以下假设变量a为10，变量b为20：
# 运算符	描述	实例
# +	加 - 两个对象相加	a + b 输出结果 30
# -	减 - 得到负数或是一个数减去另一个数	a - b 输出结果 -10
# *	乘 - 两个数相乘或是返回一个被重复若干次的字符串	a * b 输出结果 200
# /	除 - x除以y	b / a 输出结果 2
# %	取模 - 返回除法的余数	b % a 输出结果 0
# **	幂 - 返回x的y次幂	a**b 为10的20次方， 输出结果 100000000000000000000
# //	取整除 - 返回商的整数部分	9//2 输出结果 4 , 9.0//2.0 输出结果 4.0
# 实例
a = 21
b = 10
c = 0
c = a + b
print("1 - c 的值为:", c)
c = a - b
print("2 - c 的值为:", c)
c = a * b
print("3 - c 的值为", c)
c = a / b
print("4 - c 的值为:", c)
c = a % b
print("5 - c 的值为:", c)
# 修改变量 a 、b 、c
a = 2
b = 3
c = a**b
print("6 - c 的值为:", c)
a = 10
b = 5
c = a // b
print("7 - c 的值为:", c)
# Python比较运算符
# 以下假设变量a为10，变量b为20：
# 运算符	描述	实例
# ==	等于 - 比较对象是否相等 (a == b) 返回 False。
#!=	不等于 - 比较两个对象是否不相等 (a != b) 返回 true.
# >	大于 - 返回x是否大于y (a > b) 返回 False。
# <	小于 - 返回x是否小于y。所有比较运算符返回1表示真，返回0表示假。这分别与特殊的变量True和False等价。注意，这些变量名的大写。(a < b) 返回 true。
# >=	大于等于 - 返回x是否大于等于y。(a >= b) 返回 False。
# <=	小于等于 - 返回x是否小于等于y。(a <= b) 返回 true。
# 实例
a = 21
b = 10
c = 0
if a == b:
    print("1 - a 等于 b")
else:
    print("1 - a 不等于 b")
if a != b:
    print("2 - a 不等于 b")
else:
    print("2 - a 等于 b")
if a < b:
    print("3 - a 小于 b")
else:
    print("3 - a 大于等于 b")
if a > b:
    print("4 - a 大于 b")
else:
    print("4 - a 小于等于 b")
# 修改变量 a 和 b 的值
a = 5
b = 20
if a <= b:
    print("5 - a 小于等于 b")
else:
    print("5 - a 大于 b")
if b >= a:
    print("6 - b 大于等于 a")
else:
    print("6 - b 小于 a")
# Python赋值运算符
# 以下假设变量a为10，变量b为20：
# 运算符	描述	实例
# =	简单的赋值运算符	c = a + b 将 a + b 的运算结果赋值为 c
# +	加法赋值运算符	c += a 等效于 c = c + a
# -	减法赋值运算符	c -= a 等效于 c = c - a
# *	乘法赋值运算符	c *= a 等效于 c = c * a
# /	除法赋值运算符	c /= a 等效于 c = c / a
# %	取模赋值运算符	c %= a 等效于 c = c % a
# **	幂赋值运算符	c **= a 等效于 c = c ** a
# //	取整除赋值运算符	c //= a 等效于 c = c // a
#:=	海象运算符，可在表达式内部为变量赋值。Python3.8 版本新增运算符。在指定的表达式被求值后才会进行赋值。
# 海象运算符实例
n = 5
a = str("hello world")
if (n := len(a)) > 10:
    print(f"List is too long ({n} elements, expected <= 10)")
# 实例
a = 21
b = 10
c = 0
c = a + b
print("1 - c 的值为:", c)
c += a
print("2 - c 的值为:", c)
c *= a
print("3 - c 的值为:", c)
c /= a
print("4 - c 的值为:", c)
c = 2
c %= a
print("5 - c 的值为:", c)
c **= a
print("6 - c 的值为:", c)
c //= a
print("7 - c 的值为:", c)
# 传统写法
n = 10
if n > 5:
    print("n 大于 5")
# 海象运算符写法
if (n := 10) > 5:
    print("n 大于 5")
# 海象运算符允许在表达式内部进行赋值,这可以减少代码的重复,提高代码的可读性和简洁性
# Python位运算符
# 按位运算符是把数字看作二进制来进行计算的。Python中的按位运算法则如下：
# 下表中变量 a 为 60，b 为 13二进制格式如下：
a = 60  # 0011 1100
b = 13  # 0000 1101
c = -128  # 1000 0000
print("-------------------")
num = 10
len = 8
print(f"{num:0{len}b}")
print(f"{a & b:0{len}b}")
print(f"{a | b:0{len}b}")
print(f"{a ^ b:0{len}b}")
print(f"{~a:0{len}b}")
print(f"{a << 2:0{len}b}")
print(f"{a >> 2:0{len}b}")
print(f"{c >> 2:0{len}b}")
print("-------------------")
# Python逻辑运算符
# Python语言支持逻辑运算符，以下假设变量 a 为 10, b为 20
# 运算符	逻辑表达式	描述	实例
# and	x and y	布尔"与" - 如果 x 为 False，x and y 返回 False，否则它返回 y 的计算值。	a and b 返回 20。
# or	x or y	布尔"或" - 如果 x 是非 0，它返回 x 的计算值，否则它返回 y 的计算值。	a or b 返回 10。
# not	not x	布尔"非" - 如果 x 为 True，返回 False 。如果 x 为 False，它返回 True。	not(a and b) 返回 False
# 实例:
a = 10
b = 20
if a and b:
    print("1 - 变量 a 和 b 都为 true")
else:
    print("1 - 变量 a 和 b 有一个不为 true")
if a or b:
    print("2 - 变量 a 和 b 都为 true,或其中一个变量为 true")
else:
    print("2 - 变量 a 和 b 都不为 true")
# 修改变量 a 的值
a = 0
if a and b:
    print("3 - 变量 a 和 b 都为 true")
else:
    print("3 - 变量 a 和 b 有一个不为 true")
if a or b:
    print("4 - 变量 a 和 b 都为 true,或其中一个变量为 true")
else:
    print("4 - 变量 a 和 b 都不为 true")
if not (a and b):
    print("5 - 变量 a 和 b 都为 false,或其中一个变量为 false")
else:
    print("5 - 变量 a 和 b 都为 true")
# Python成员运算符
# 除了以上的一些运算符之外，Python还支持成员运算符，测试实例中包含了一系列的成员，包括字符串，列表或元组。
# 运算符	描述	实例
# in	如果在指定的序列中找到值返回 True，否则返回 False。	x 在 y 序列中 , 如果 x 在 y 序列中返回 True。
# not in	如果在指定的序列中没有找到值返回 True，否则返回 False。	x 不在 y 序列中, 如果 x 不在 y 序列中返回 True。
# 实例
a = 10
b = 20
list = [1, 2, 3, 4, 5]
if a in list:
    print("1 - 变量 a 在给定的列表中 list 中")
else:
    print("1 - 变量 a 不在给定的列表中 list 中")
if b not in list:
    print("2 - 变量 b 不在给定的列表中 list 中")
else:
    print("2 - 变量 b 在给定的列表中 list 中")
# 修改变量 a 的值
a = 2
if a in list:
    print("3 - 变量 a 在给定的列表中 list 中")
else:
    print("3 - 变量 a 不在给定的列表中 list 中")
# Python身份运算符
# 身份运算符用于比较两个对象的存储单元
# 运算符	描述	实例
# is	是判断两个标识符是不是引用自一个对象	x is y, 类似 id(x) == id(y), 如果引用的是同一个对象则返回 True，否则返回 False
# is not	是判断两个标识符是不是引用自不同对象	x is not y， 类似 id(a) != id(b)。如果引用的不是同一个对象则返回结果 True，否则返回 False。
# 注：id()函数用于获取对象内存地址。
# 实例
a = 20
b = 20
if a is b:
    print("1 - a 和 b 有相同的标识")
else:
    print("1 - a 和 b 没有相同的标识")
if id(a) == id(b):
    print("2 - a 和 b 有相同的标识")
else:
    print("2 - a 和 b 没有相同的标识")
# 修改变量 b 的值
b = 30
if a is b:
    print("3 - a 和 b 有相同的标识")
else:
    print("3 - a 和 b 没有相同的标识")
if a is not b:
    print("4 - a 和 b 没有相同的标识")
else:
    print("4 - a 和 b 有相同的标识")
# is 与 == 区别
# is 用于判断两个变量引用对象是否为同一个， == 用于判断引用变量的值是否相等。
# 实例
a = [1, 2, 3]
b = a
print(b is a)
print(b == a)
b = a[:]
print(b is a)
print(b == a)
# Python运算符优先级
# 以下表格列出了从最高到最低优先级的所有运算符：
# 运算符	描述
# (expressions...)	圆括号
# x[index],x[index:index],x(arguments),x.attribute	下标，切片，调用，属性引用
# await x await 表达式
# **	指数
# ~ + -	按位翻转, 一元加号和减号 (最后两个的方法名为 +@ 和 -@)
# * / % //	乘，除，取模和取整除
# + -	加法减法
# >> <<	右移，左移运算符
# &	位 'AND'
# ^ |	位运算符
# <= < > >=	比较运算符
# <> == !=	等于运算符
# = %= /= //= -= += *= **=	赋值运算符
# is is not	身份运算符
# in not in	成员运算符
# not
# and
# or	逻辑运算符
# if - else	条件运算符
# lambda	lambda 表达式
# = 赋值表达式
# 一下实例演示了Python所有运算符优先级的实例：
# 实例
a = 20
b = 10
c = 15
d = 5
e = 0

e = (a + b) * c / d
print("(a + b) * c / d  的运算结果为: ", e)

e = ((a + b) * c) / d
print("((a + b) * c) / d 的运算结果为: ", e)

e = (a + b) * (c / d)
print("(a + b) * (c / d) 的运算结果为: ", e)

e = a + (b * c) / d
print("a + (b * c) / d 的运算结果为: ", e)

# and拥有更高优先级
x = True
y = False
z = False
if x or y and z:
    print("yes")
else:
    print("no")
